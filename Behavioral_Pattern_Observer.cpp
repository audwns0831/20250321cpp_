//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
///*
//* �ൿ ����
//* - ������(Observer) : ������ ������ ������ ������ ������ �ϴ�ٰ��踦 �����մϴ�.
//* ������ ���°� �ٲ�� �� ��ü�� �����ϴ� �ٸ� ��ü�� �������鿡�� ������ �����ϰ� �ڵ����� ������ �����մϴ�.
//* ������ ���Ͽ����� ������ �������� ������ ������ �����մϴ�.
//*/
//
//// ������ Ŭ����
//class Observer {
//public:
//	virtual void update(float temperature, float humidity, float pressure) = 0; // ���� ������Ʈ �޼���
//	virtual ~Observer() {}
//};
//
//// ���� Ŭ����
//class Subject {
//public:
//	virtual void registerObserver(Observer* observer) = 0;	// �������� ���
//	virtual void removeObserver(Observer* observer) = 0;	// �������� ����
//	virtual void notifyObservers() = 0;						// ���������� �˸�
//	virtual ~Subject() {};
//};
//// ��ü���� ���� : WeatherDate
//class WeatherDate : public Subject {
//private:
//	vector<Observer*> observers;	// ������ ���
//	float temperature;				// �µ�
//	float humidity;					// ����
//	float pressure;					// ���
//
//public:
//	WeatherDate() : temperature(0.0f), humidity(0.0f), pressure(0.0f){}
//	virtual void registerObserver(Observer* observer) override {
//		observers.push_back(observer);
//	}
//
//	virtual void removeObserver(Observer* observer) override {
//		// ������ ��Ͽ��� ����
//		auto it = find(observers.begin(), observers.end(), observer);
//		if (it != observers.end()) {
//			observers.erase(it);
//		}
//	}
//	void setMeasurement(float temp, float hum, float press) {
//		temperature = temp;
//		humidity = hum;
//		pressure = press;
//		notifyObservers(); // ���� ������ ����Ǹ� �������鿡�� �˸�
//	}
//	virtual void notifyObservers() override {
//		// ��� ���������� �˸�
//		for (Observer* observer : observers) {
//			observer->update(temperature, humidity, pressure);
//		}
//	}
//};
//
//// ��ü���� ������ : �Ϲ����� ���� �˸� ���÷���
//class CurrentConditionsDisplay : public Observer {
//private:
//	float temperature;
//	float humidity;
//	float pressure;
//	Subject* weatherDate; // ���� ������ ������ �ִ� ��ü
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
//		display();	// ���� �����Ͱ� ����ɶ����� ȭ�� ����
//	}
//	void display() {
//		cout << "���糯��: �µ� : " << temperature << " , ���� : " << humidity << ", ��� : " << pressure << endl;
//	}
//};
//
//int main() {
//	
//	// ���� �����͸� �����ϴ� ��ü ��ü ����
//	WeatherDate* weatherDate = new WeatherDate();
//
//	// ������ ��ü ���� �� ���
//	CurrentConditionsDisplay* observer = new CurrentConditionsDisplay(weatherDate);
//
//	// �������� ������Ʈ
//	weatherDate->setMeasurement(25.5, 65, 1013);
//	weatherDate->setMeasurement(28.3, 70, 1018);
//	weatherDate->setMeasurement(22.1, 65, 1011);
//
//	weatherDate->removeObserver(observer);
//	
//	// �������� ������Ʈ
//	weatherDate->setMeasurement(23.1, 55, 1015);
//
//	delete weatherDate;
//	delete observer;
//
//
//	return 0;
//}