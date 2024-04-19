#include <string>
#include<iostream>
using namespace std;
// ʵ�ֵ������ݵĽӿ�, �������ݵĸ�ʽ���� xml��json���ı���ʽtxt ���������չexcel��ʽcsv
class IExport {
public:
    virtual bool Export(const std::string &data) = 0;
    virtual ~IExport(){}
};

class ExportXml : public IExport {
public:
    virtual bool Export(const std::string &data) {
        return true;
    }
};

class ExportJson : public IExport {
public:
    virtual bool Export(const std::string &data) {
        return true;
    }
};

class ExportTxt : public IExport {
public:
    virtual bool Export(const std::string &data) {
        return true;
    }
};

class ExportCSV : public IExport {
public:
    virtual bool Export(const std::string &data) {
        return true;
    }
};

class IExportFactory {
public:
    IExportFactory() {
        _export = nullptr;
    }
    virtual ~IExportFactory() {
        if (_export) {
            delete _export;
            _export = nullptr;
        }
    }
    bool Export(const std::string &data) {
        if (_export == nullptr) {
            _export = NewExport();
        }
        return _export->Export(data);
    }
protected:
    virtual IExport * NewExport(/* ... */) = 0;
private:
    IExport* _export;
};

class ExportXmlFactory : public IExportFactory {
protected:
    virtual IExport * NewExport(/* ... */) {
        // ��������������������������
        IExport * temp = new ExportXml();
        // ����֮����ʲô����
        return temp;
    }
};
class ExportJsonFactory : public IExportFactory {
protected:
    virtual IExport * NewExport(/* ... */) {
        // ��������������������������
        IExport * temp = new ExportJson;
        // ����֮����ʲô����
        return temp;
    }
};
class ExportTxtFactory : public IExportFactory {
protected:
    IExport * NewExport(/* ... */) {
        // ��������������������������
        IExport * temp = new ExportTxt;
        // ����֮����ʲô����
        return temp;
    }
};

class ExportCSVFactory : public IExportFactory {
protected:
    virtual IExport * NewExport(/* ... */) {
        // ��������������������������
        IExport * temp = new ExportCSV;
        // ����֮����ʲô����
        return temp;
    }
};

int main () {
    IExportFactory *factory = new ExportCSVFactory();
    factory->Export("hello world");
    return 0;
}
