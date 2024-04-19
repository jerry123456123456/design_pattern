class Context {

};

// �ȶ��㣺����ȥ�����
// �仯�㣺��չ���̳к���ϣ�ȥ�����
class ProStategy {
public:
    virtual double CalcPro(const Context &ctx) = 0;
    virtual ~ProStategy(); 
};
// cpp
class VAC_Spring : public ProStategy {
public:
    virtual double CalcPro(const Context &ctx){
    }
};

class VAC_Spring_v2 : public VAC_Spring {
public:
    virtual double CalcPro(const Context &ctx){
        //....
    }
};

class VAC_worker : public ProStategy {
public:
    virtual double CalcPro(const Context &ctx){}
};

// cpp
class VAC_QiXi : public ProStategy {
public:
    virtual double CalcPro(const Context &ctx){}
};
class VAC_QiXi1  : public VAC_QiXi {
public:
    virtual double CalcPro(const Context &ctx){}
};
// cpp
class VAC_Wuyi : public ProStategy {
public:
    virtual double CalcPro(const Context &ctx){}
};
// cpp
class VAC_GuoQing : public ProStategy {
public:
    virtual double CalcPro(const Context &ctx){}
};
class VAC_GuoQing2 : public VAC_GuoQing {
public:
    virtual double CalcPro(const Context &ctx){}
};

class VAC_Shengdan : public ProStategy {
public:
    virtual double CalcPro(const Context &ctx){}
};

// ���ԭ�򣺽ӿڸ���ԭ��
// ��ϡ��̳�
// ��ϻ���ָ��
// ���ַ�����1. ���þ���ӿ�ѡ���㷨  2. ����ע��
class Promotion {
public:
    Promotion(ProStategy *sss = nullptr) : s(sss){}
    ~Promotion(){}
    void Choose(ProStategy *sss) {
        // ����ѡ��
        if (sss != nullptr) {
            s = sss;
        }
    }
    double CalcPromotion(const Context &ctx){
        if (s != nullptr) {
            return s->CalcPro(ctx);
        }
        return 0.0L;
    }
private:
    ProStategy *s;
};

int main () {
    Context ctx;
    ProStategy *s = new VAC_QiXi1();
    Promotion *p = new Promotion(s);
    p->Choose(new VAC_GuoQing2());
    p->CalcPromotion(ctx);
    return 0;
}
