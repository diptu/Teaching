#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

class FullStack{


};
class EmptyStack{


};
template <class ItemType>
class StackType {
        public:
            StackType();
            bool IsFull();
            bool Push(ItemType);
            void Pop();
        private:
            int top;
            ItemType items[MAX_ITEMS];

};
#endif // STACKTYPE_H_INCLUDED
