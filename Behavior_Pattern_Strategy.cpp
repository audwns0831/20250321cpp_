#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
* �ൿ ����
* - ����(Strategy) : Ư�� �۾��� �����ϴ� �˰����� ������ �����ϰ�, �̸� ���������� ��ȯ �����ϰ� �����
* Ŭ���̾�Ʈ �ڵ忡�� �������� �˰����� �����Ͽ� ����� �� �ְ� �ϴ� ������ �����Դϴ�.
* ���� ������ ����ϸ� �˰����� Ŭ�������� �и��ϰ�, �̸� ĸ��ȭ�Ͽ� ���濡 �����ϰ� ������ �� �ֽ��ϴ�.
*/

// ���� ���� Ŭ����
class DiscountStrategy {
public:
	virtual double calculateDiscount(double price) = 0; // ������ ��� �޼���
	virtual ~DiscountStrategy() {}
};
// �Ϲ� ���� ����
class RegularDiscount : public DiscountStrategy {
public:
	virtual double calculateDiscount(double price) override {
		return price * 0.95; // 5�ۼ�Ʈ ����
	}
};
// ���� ���� ����
class SeasonDiscount : public DiscountStrategy {
public:
	virtual double calculateDiscount(double price) override {
		return price * 0.80; // 20�ۼ�Ʈ ����
	}
};
// ȸ�� ���� ����
class MembershipDiscount : public DiscountStrategy {
public:
	virtual double calculateDiscount(double price) override {
		return price * 0.90; // 10% ����
	}
};

// ���� ������ ����ϴ� ���ؽ�Ʈ
class DiscountContext {
private:
	shared_ptr<DiscountStrategy> strategy; // ����� ����
public:
	// ������ �����ϴ� �޼���
	void setStrategy(shared_ptr<DiscountStrategy> newStrategy) {
		strategy = newStrategy;
	}

	// ���� ������ ����ϴ� �޼���
	double getDiscountedPrice(double price) {
		if (strategy) {
			return strategy->calculateDiscount(price); // ������ �´� ���� ���
		}
		return price; // ������ �������
	}
};

int main() {
	// ���� ���� ��ü�� ����
	shared_ptr<DiscountStrategy> regularDiscount = make_shared<RegularDiscount>();
	shared_ptr<DiscountStrategy> seasonDiscount = make_shared<SeasonDiscount>();
	shared_ptr<DiscountStrategy> membershipDiscount = make_shared<MembershipDiscount>();

	// ���ؽ�Ʈ ��ü ����
	DiscountContext context;

	context.setStrategy(regularDiscount);
	double regularPrice = context.getDiscountedPrice(100); // 100������ 5% ����
	cout << "Regular discount price : " << regularPrice << "��" << endl;

	context.setStrategy(seasonDiscount);
	double seasonPrice = context.getDiscountedPrice(100); // 100������ 5% ����
	cout << "Season discount price : " << seasonPrice << "��" << endl;

	context.setStrategy(membershipDiscount);
	double membershipPrice = context.getDiscountedPrice(100); // 100������ 5% ����
	cout << "Membership discount price : " << membershipPrice << "��" << endl;


	return 0;
}