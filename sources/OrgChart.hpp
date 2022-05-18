
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
using namespace std;
#pragma once


namespace ariel{
    class OrgChart{

        public:
        //node type to represnt the inside node, if there is no down node or right node it will be null
        typedef struct node{
            string name;
            node *down;
            node *right;
        }node;
        //node type to represnt root node, if there is no down node it will be null
        typedef struct root{
            string name;
            node *down;
        }root;
        //constructor + destructor
        OrgChart();
        ~OrgChart();

        //מקבלת קלט אחד ושמה אותו בשורש של העץ. אם כבר יש משהו בשורש, הוא מוחלף.
        OrgChart& add_root(string rootname);
        //מקבלת שני קלטים. אדם (או מחלקה) שכבר קיימים במבנה הארגוני ואדם נוסף (או מחלקה נוספת) אשר מדווחים לאדם הראשון ונמצאים מתחתיו בהיררכיה הארגונית.
        OrgChart& add_sub(string top, string bot);
        //
        friend std::ostream &operator<<(std::ostream &out, const OrgChart &root);
        //מחזירות איטרטורים לצורך מעבר בסדר level order (אב - בן - בן - נכד).
        string* begin_level_order();
        string* end_level_order();
        //מחזירות איטרטורים לצורך מעבר בסדר reverse level order (נכד - נכד - בן - בן - אב).
        string* begin_reverse_order();
        string* end_reverse_order();
        //מחזירות איטרטורים לצורך מעבר בסדר preorder (אב - בן - נכד - בן - נכד)
        string* begin_preorder();
        string* end_preorder();
        string* reverse_order();
        
        //for loops {i in x}
        string* begin(){return begin_level_order();}
        string* end(){return end_level_order();}
        
        private:
        root r;
    };

}