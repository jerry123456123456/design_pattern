#include <iostream>
using namespace std;

class ZooShow {   //���࣬�ǳ��ȶ�
public:
    ZooShow(bool expired=true) : expired(expired){}
    void Show() {
        if (Show0())
            PlayGame();
        Show1();
        Show2();
        Show3();
    }
    
private:          //private�ؼ����еĲ����������������޷��޸�
    void PlayGame() {
        cout << "after Show0, then play game" << endl;
    }
    
protected:       //protected���ֵĴ����������������������д

    bool expired;
    virtual bool Show0() {
        cout << "show0" << endl;
        if (!expired) {
            return true;
        }
        return false;
    }
    virtual void Show1() {
        // do something
    }
    virtual void Show2() {
        cout << "show2" << endl;
    }
    virtual void Show3() {
        // do something
    }
};

class ZooShowEx10 : public ZooShow {
protected:
    virtual bool Show0() override {
        if (!expired) {
            return true;
        }
        return false;
    }
};

class ZooShowEx1 : public ZooShow {
protected:
    virtual bool Show0() override {
        cout << "ZooShowEx1 show0" << endl;
        if (!expired) {
            return true;
        }
        return false;
    }
    virtual void Show2() override {
        cout << "show2" << endl;
    }
};

class ZooShowEx2 : public ZooShow {
protected:
    virtual void Show1() override {
        cout<<"ZooShowEx2"<<endl;
        cout << "show1" << endl;
    }
    virtual void Show2() override {
        cout<<"ZooShowEx2"<<endl;
        cout << "show2" << endl;
    }
};

class ZooShowEx3 : public ZooShow {
protected:
    virtual void Show1() override {
        cout << "show1" << endl;
    }
    virtual void Show3() override {
        cout << "show3" << endl;
    }
};

int main() {
    ZooShow *zs = new ZooShowEx10();
    zs->Show();
    return 0;
}