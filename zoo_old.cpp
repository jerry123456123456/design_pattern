#include <iostream>
using namespace std;

// ���ԭ��
// 1. ���ԭ���ݱ������  2.�������ԭ��Ĵ��룬ֻ��Ҫ�޸���������Ϳ����ݱ�����ģʽ
// �ӿڸ���ԭ��  1. ���װ Ȩ���޶�����ʵ�� 2. ���������� �ӿڣ�����ע�룩
// ��С֪��ԭ��
// �ƻ�����Щ���ԭ��
// ��һְ�𣨱仯���� ��װ
// ����ԭ�� ����չ���� ���޸Ĺر�
// ��չ��ʽ���̳У���̬���

class ZooShow {
public:
    ZooShow(int type = 1) : _type(type) {}

public:
    void Show() {
        if (Show0())
            PlayGame();
        Show1();
        Show2();
        Show3();
    }

private:
    void PlayGame() {
        cout << "after Show0, then play game" << endl;
    }

    bool Show0() {
        if (_type == 1) {
            // 
            return true;
        } else if (_type == 2 ) {
            //  ...
        } else if (_type == 3) {

        }
        cout << _type << " show0" << endl;
        return true;
    }

    void Show1() {
        if (_type == 1) {
            cout << _type << " Show1" << endl;
        } else if (_type == 2) {
            cout << _type << " Show1" << endl;
        } else if (_type == 3) {

        }
    }

    void Show2() {
        if (_type == 20) {
            
        }
        cout << "base Show2" << endl;
    }

    void Show3() {
        if (_type == 1) {
            cout << _type << " Show1" << endl;
        } else if (_type == 2) {
            cout << _type << " Show1" << endl;
        }
    }
private:
    int _type;
};


int main () {
    ZooShow *zs = new ZooShow(1);
    zs->Show();
    return 0;
}
