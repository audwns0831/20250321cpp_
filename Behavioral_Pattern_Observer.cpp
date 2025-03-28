//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
///*
//* 행동 패턴
//* - 옵저버(Observer) : 옵저버 패턴은 주제와 옵저버 사이의 일대다관계를 정의합니다.
//* 주제의 상태가 바뀌면 그 객체에 의존하는 다른 객체인 옵저버들에게 연락을 전달하고 자동으로 내용을 갱신합니다.
//* 옵저버 패턴에서의 주제와 옵저버는 느슨한 결합을 유지합니다.
//*/
//
//// 옵저버 클래스
//class Observer {
//public:
//	virtual void update(float temperature, float humidity, float pressure) = 0; // 상태 업데이트 메서드
//	virtual ~Observer() {}
//};
//
//// 주제 클래스
//class Subject {
//public:
//	virtual void registerObserver(Observer* observer) = 0;	// 옵저버를 등록
//	virtual void removeObserver(Observer* observer) = 0;	// 옵저버를 제거
//	virtual void notifyObservers() = 0;						// 옵저버에게 알림
//	virtual ~Subject() {};
//};
//// 구체적인 주제 : WeatherDate
//class WeatherDate : public Subject {
//private:
//	vector<Observer*> observers;	// 옵저버 목록
//	float temperature;				// 온도
//	float humidity;					// 습도
//	float pressure;					// 기압
//
//public:
//	WeatherDate() : temperature(0.0f), humidity(0.0f), pressure(0.0f){}
//	virtual void registerObserver(Observer* observer) override {
//		observers.push_back(observer);
//	}
//
//	virtual void removeObserver(Observer* observer) override {
//		// 옵저버 목록에서 삭제
//		auto it = find(observers.begin(), observers.end(), observer);
//		if (it != observers.end()) {
//			observers.erase(it);
//		}
//	}
//	void setMeasurement(float temp, float hum, float press) {
//		temperature = temp;
//		humidity = hum;
//		pressure = press;
//		notifyObservers(); // 날씨 정보가 변경되면 옵저버들에게 알림
//	}
//	virtual void notifyObservers() override {
//		// 모든 옵저버에게 알림
//		for (Observer* observer : observers) {
//			observer->update(temperature, humidity, pressure);
//		}
//	}
//};
//
//// 구체적인 옵저버 : 일반적인 날씨 알림 디스플레이
//class CurrentConditionsDisplay : public Observer {
//private:
//	float temperature;
//	float humidity;
//	float pressure;
//	Subject* weatherDate; // 날씨 데이터 가지고 있는 객체
//public:
//	CurrentConditionsDisplay(Subject* weatherDate) {
//		this->weatherDate = weatherDate;
//		weatherDate->registerObserver(this);
//	}
//
//	virtual void update(float temperature, float humidity, float pressure) {
//		this->temperature = temperature;
//		this->humidity = humidity;
//		this->pressure = pressure;
//		display();	// 날씨 데이터가 변경될때마다 화면 갱신
//	}
//	void display() {
//		cout << "현재날씨: 온도 : " << temperature << " , 습도 : " << humidity << ", 기압 : " << pressure << endl;
//	}
//};
//
//int main() {
//	
//	// 날씨 데이터를 제공하는 주체 객체 생성
//	WeatherDate* weatherDate = new WeatherDate();
//
//	// 옵저버 객체 생성 및 등록
//	CurrentConditionsDisplay* observer = new CurrentConditionsDisplay(weatherDate);
//
//	// 날씨정보 업데이트
//	weatherDate->setMeasurement(25.5, 65, 1013);
//	weatherDate->setMeasurement(28.3, 70, 1018);
//	weatherDate->setMeasurement(22.1, 65, 1011);
//
//	weatherDate->removeObserver(observer);
//	
//	// 날씨정보 업데이트
//	weatherDate->setMeasurement(23.1, 55, 1015);
//
//	delete weatherDate;
//	delete observer;
//
//
//	return 0;
//}