#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
* 행동 패턴
* - 전략(Strategy) : 특정 작업을 수행하는 알고리즘을 여러개 정의하고, 이를 개별적으로 교환 가능하게 만들어
* 클라이언트 코드에서 동적으로 알고리즘을 선택하여 사용할 수 있게 하는 디자인 패턴입니다.
* 전략 패턴을 사용하면 알고리즘을 클래스에서 분리하고, 이를 캡슐화하여 변경에 유연하게 대응할 수 있습니다.
*/

// 할인 전략 클래스
class DiscountStrategy {
public:
	virtual double calculateDiscount(double price) = 0; // 할인율 계산 메서드
	virtual ~DiscountStrategy() {}
};
// 일반 할인 전략
class RegularDiscount : public DiscountStrategy {
public:
	virtual double calculateDiscount(double price) override {
		return price * 0.95; // 5퍼센트 할인
	}
};
// 시즌 할인 전략
class SeasonDiscount : public DiscountStrategy {
public:
	virtual double calculateDiscount(double price) override {
		return price * 0.80; // 20퍼센트 할인
	}
};
// 회원 할인 전략
class MembershipDiscount : public DiscountStrategy {
public:
	virtual double calculateDiscount(double price) override {
		return price * 0.90; // 10% 할인
	}
};

// 할인 전략을 사용하는 컨텍스트
class DiscountContext {
private:
	shared_ptr<DiscountStrategy> strategy; // 사용할 전략
public:
	// 전략을 설정하는 메서드
	void setStrategy(shared_ptr<DiscountStrategy> newStrategy) {
		strategy = newStrategy;
	}

	// 할인 가격을 계산하는 메서드
	double getDiscountedPrice(double price) {
		if (strategy) {
			return strategy->calculateDiscount(price); // 전략에 맞는 할인 계산
		}
		return price; // 전략이 없을경우
	}
};

int main() {
	// 할인 전략 객체를 생성
	shared_ptr<DiscountStrategy> regularDiscount = make_shared<RegularDiscount>();
	shared_ptr<DiscountStrategy> seasonDiscount = make_shared<SeasonDiscount>();
	shared_ptr<DiscountStrategy> membershipDiscount = make_shared<MembershipDiscount>();

	// 컨텍스트 객체 생성
	DiscountContext context;

	context.setStrategy(regularDiscount);
	double regularPrice = context.getDiscountedPrice(100); // 100원에서 5% 할인
	cout << "Regular discount price : " << regularPrice << "원" << endl;

	context.setStrategy(seasonDiscount);
	double seasonPrice = context.getDiscountedPrice(100); // 100원에서 5% 할인
	cout << "Season discount price : " << seasonPrice << "원" << endl;

	context.setStrategy(membershipDiscount);
	double membershipPrice = context.getDiscountedPrice(100); // 100원에서 5% 할인
	cout << "Membership discount price : " << membershipPrice << "원" << endl;


	return 0;
}