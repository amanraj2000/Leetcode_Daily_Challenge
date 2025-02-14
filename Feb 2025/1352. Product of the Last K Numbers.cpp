class ProductOfNumbers {
private:
    int zeroes_count;
    long int product;
    vector<int> zeroes;
    vector<long int> products;
public:
    ProductOfNumbers() {
        zeroes_count = 0;
        product = 1;
        zeroes.push_back(0);
        products.push_back(1);
    }
    
    void add(int num) {
        if(num == 0) zeroes_count++ , product = 1;
        else product *= num;
        zeroes.push_back(zeroes_count);
        products.push_back(product);
    }
    
    int getProduct(int k) {
        int n = products.size(); 
        int zero = zeroes[n - 1] - zeroes[n - 1 - k]; 
        if(zero == 0) return products[n - 1]/products[n - 1 - k];
        else return 0;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */