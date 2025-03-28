//#include <iostream>
//
//using namespace std;
//
///*
//* 행동 패턴
//* 
//* - 책임 연쇄(Chain of Responsibility) : 일련의 핸들러들의 사슬을 따라 요청을 전달할 수 있게 해주는 행동 디자인 패턴입니다.
//* 각 핸들러는 요청을 받으면 요청을 처리할지 아니면 체인의 다음 핸들러로 전달할지를 결정합니다.
//* 
//* - 중재자(Mediator) : 객체 간의 혼란스러운 의존 관계들을 줄일 수 있습니다.
//* 이 패턴은 객체 간의 직접통신을 제한하고 중재자 객체를 통해서만 협력하도록 합니다.
//* 
//* - 메멘토(Memento) : 객체의 구현 세부 사항을 공개하지 않으면서 해당 객체 이전 상태를 저장하고 복원할 수 있게 해줍니다.
//* 
//* - 상태(State) : 객체의 내부 상태가 변경될 때 해당 객체가 그의 행동을 변경할 수 있도록 합니다.
//* 객체가 행동을 변경할 때 객체가 클래스를 변경한 것처럼 보일 수 있습니다.
//* 
//* - 템플릿 메서드(Template Method) : 부모 클래스에서 알고리즘의 골격을 정의하지만, 해당 알고리즘의 구조를 변경하지 않고
//* 자식 클래스들이 알고리즘의 특정 단계들을 오버라이드(재정의) 할수 있도록 합니다.
//* 
//* - 비지터(Visitor) : 알고리즘들을 그들이 작동하는 객체들로부터 분리할 수 있습니다.
//* 
//* - 커맨드(Command) : 요청을 캡슐화 하여 사용자가 요청을 보낼 객체를 분리하고, 여러 명령을 처리할 수 있게 하는 행동 디자인 패턴입니다.
//* 이 패턴은 명령객체를 사용하여 요청을 객체로 캡슐화하고, 요청을 호출하는 대신 요청을 객체로 처리하는 방법을 제공합니다.
//* 
//* - 반복자(Iterator) : 컬렉션 객체에 대한 순차적인 접근을 제공하는 디자인 패턴입니다.
//* 이 패턴을 사용하면 컬렉션 내부 구조를 노출하지 않고 컬렉션의 요소를 순차적으로 탐색할 수 있습니다.
//* 
//* - 옵저버(Observer) : 옵저버 패턴은 주제와 옵저버 사이의 일대다관계를 정의합니다.
//* 주제의 상태가 바뀌면 그 객체에 의존하는 다른 객체인 옵저버들에게 연락을 전달하고 자동으로 내용을 갱신합니다.
//* 옵저버 패턴에서의 주제와 옵저버는 느슨한 결합을 유지합니다.
//* 
//* - 전략(Strategy) : 특정 작업을 수행하는 알고리즘을 여러개 정의하고, 이를 개별적으로 교환 가능하게 만들어
//* 클라이언트 코드에서 동적으로 알고리즘을 선택하여 사용할 수 있게 하는 디자인 패턴입니다.
//* 전략 패턴을 사용하면 알고리즘을 클래스에서 분리하고, 이를 캡슐화하여 변경에 유연하게 대응할 수 있습니다.
//*/
//
//// 커맨드 인터페이스
//class Command {
//public:
//	virtual void execute() = 0; // 명령을 실행하는 메서드
//	virtual ~Command() {}
//};
//// 수신자 : 전등 (light)
//class Light {
//public:
//	void on() {
//		cout << "전등을 켭니다." << endl;
//	}
//	void off() {
//		cout << "전등을 끕니다." << endl;
//	}
//};
//// 전등 켜기 명령
//class LightOnCommand : public Command {
//private:
//	Light* light; // 전등을 제어할 수 있는 수신자
//public:
//	LightOnCommand(Light* l) {
//		this->light = l;
//	}
//	virtual void execute() override {
//		light->on();
//	}
//};
//
//// 전등 켜기 명령
//class LightOffCommand : public Command {
//private:
//	Light* light; // 전등을 제어할 수 있는 수신자
//public:
//	LightOffCommand(Light* l) {
//		this->light = l;
//	}
//	virtual void execute() override {
//		light->off();
//	}
//};
//// 명령을 실행하는 리모컨
//class RemoteControl {
//private:
//	Command* command;
//public:
//	void setCommand(Command* cmd) {
//		command = cmd;
//	}
//	void pressButton() {
//		command->execute();
//	}
//};
//
//
//int main() {
//	Light* light = new Light(); // 전등객체 생성
//
//	// 전등을 켜고 끄는 명령 생성
//	Command* lightOn = new LightOnCommand(light);
//	Command* lightOff = new LightOffCommand(light);
//
//	// 리모컨 객체 생성
//	RemoteControl* remote = new RemoteControl();
//
//	// 리모컨에 전등켜기 명령을 설정하고 버튼을 누른다
//	remote->setCommand(lightOn);
//	remote->pressButton();
//
//	// 리모컨에 전등끄기 명령을 설정하고 버튼을 누른다
//	remote->setCommand(lightOff);
//	remote->pressButton();
//
//	// 효율적으로 운영하려면 컨테이너를 활용해서
//	// 명령들을 담아두고 적재적소에 사용하는 모듈화를 시도해야함
//
//	delete light;
//	delete lightOn;
//	delete lightOff;
//	delete remote;
//
//
//	return 0;
//}