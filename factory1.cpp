#include <string>
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
// csv
class ExportTxt : public IExport {
public:
    virtual bool Export(const std::string &data) {
        return true;
    }
};

// class ExportCSV : public IExport {
// public:
//     virtual bool Export(const std::string &data) {
//         return true;
//     }
// };

// =====1
int main() {
    std::string choose/* = */;
    if (choose == "txt") {
        /***/
        IExport *e = new ExportTxt();
        /***/
        e->Export("hello world");
    } else if (choose == "json") {
        /***/
        IExport *e = new ExportJson();
        /***/
        e->Export("hello world");
    } else if (choose == "xml") {
        IExport *e = new ExportXml();
        e->Export("hello world");
    } else if (choose == "csv") {
        IExport *e = new ExportXml();
        e->Export("hello world");
    }
}

