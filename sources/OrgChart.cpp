#include "OrgChart.hpp"

namespace ariel {
    OrgChart::OrgChart() {
        //code here
    }

    OrgChart::~OrgChart() {
        //code here or no code here
    }

    //מקבלת קלט אחד ושמה אותו בשורש של העץ. אם כבר יש משהו בשורש, הוא מוחלף.
    OrgChart &OrgChart::add_root(string rootname){
        this->r.name = rootname;
        return *this;
    }
    //מקבלת שני קלטים. אדם (או מחלקה) שכבר קיימים במבנה הארגוני ואדם נוסף (או מחלקה נוספת) אשר מדווחים לאדם הראשון ונמצאים מתחתיו בהיררכיה הארגונית.
    OrgChart &OrgChart::add_sub(string top, string bot){
        //need to search for top in all nodes, and add bot to the down or down->*right
        return *this;
    }
    //
    ostream &operator<<(ostream &out, const OrgChart &root){
        //need to iterate over all the nodes from root to all leaves and add them to out
        return out;
    }
    //מחזירות איטרטורים לצורך מעבר בסדר level order (אב - בן - בן - נכד).
    string* OrgChart::begin_level_order(){
        string ans = "dor";
        string *a = &ans;
        return a;
    }
    string* OrgChart::end_level_order(){
        string ans = "dor";
        string *a = &ans;
        return a;
    }
    //מחזירות איטרטורים לצורך מעבר בסדר reverse level order (נכד - נכד - בן - בן - אב).
    string* OrgChart::begin_reverse_order(){
        string ans = "dor";
        string *a = &ans;
        return a;
    }
    string* OrgChart::end_reverse_order(){
        string ans = "dor";
        string *a = &ans;
        return a;
    }
    //מחזירות איטרטורים לצורך מעבר בסדר preorder (אב - בן - נכד - בן - נכד)
    string* OrgChart::begin_preorder(){
        string ans = "dor";
        string *a = &ans;
        return a;
    }
    string* OrgChart::end_preorder(){
        string ans = "dor";
        string *a = &ans;
        return a;
    }
    string* OrgChart::reverse_order(){
        string ans = "dor";
        string *a = &ans;
        return a;
    }

}