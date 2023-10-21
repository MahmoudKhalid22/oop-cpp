class Counter
{
private:
    unsigned int count; 
public:


    Counter():count(0){};

    Counter(int a):count(a){}

    int getCount() {
        return count;
    
    
    }

    // Overloading unary op

    Counter operator ++ () {
        ++count;
        return Counter(count);
    }
    
    Counter operator ++ (int) {
        count++;
        return Counter(count);
    }
    
    Counter operator -- (int) {
        count--;
        return Counter(count);
    }
    
    Counter operator -- () {
        --count;
        return Counter(count);
    }

    // Overloading binary op

    Counter operator + (Counter c){
     
        int b = count + c.count;
        return Counter(b);
    }
    
};

