enum VacationEnum {
	VAC_Spring,
    VAC_QiXi,
	VAC_Wuyi,
	VAC_GuoQing,
    VAC_ShengDan,
};

class Promotion {
    VacationEnum vac;
public:
    double CalcPromotion() {
        if (vac == VAC_Spring) {
            // ����
        }
        else if (vac == VAC_QiXi) {
            // ��Ϧ
        }
        else if (vac == VAC_Wuyi) {
            // ��һ
        }
		else if (vac == VAC_GuoQing) {
			// ����
		}
        else if (vac == VAC_ShengDan) {

        }
     }
    
};
