#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{

    /*
     *vector accept obj to be its factors, but not quote.
     */
    vector<int> int_vec = {1, 3, 5, 9}, supplement;
    vector<vector<int>> dimension_two(4,vector<int>(10,99));
    //In face of the contant, we can also use const vector<typename>

    supplement.push_back(88);
    dimension_two.push_back(supplement);

    //cbengin() return a constant pointer to the first element.
    //const_iterator only read data
    for(auto it = dimension_two.cbegin(); it != dimension_two.cend(); ++it){
        for(vector<int>::const_iterator iit = it->cbegin(); iit != (*it).cend(); iit++){
            cout << *iit << " ";
        }
        cout<<endl;
    }
    cout << endl;





    vector<string> v2 = {10,"hi"};
    vector<string>::iterator i;
    // end() return next position from the end.
    // begin() and end() are up to if variables are constant.
    for(i = v2.begin(); i!=v2.end(); i++){
        cout << *i << " ";
    }
    cout << endl << "How many \"hi\" are here?" << endl;
    if(v2.empty())
        printf("Holy shit! Nothing there.");
    else
        printf("%d.\n",v2.size());

    /*
     *  by quote
     */
    //it same as "auto &x : int_vec;"
    for(auto x = int_vec.begin(); x !=int_vec.end(); x++){
        *x+=1;
        cout << *x << " ";
    }
    cout << endl;



    /*
     * Grade group.
     */
    //instialize 0 as default
    vector<int> grade(11);
    unsigned int a[15] = {42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93};
    for(int index = 0; index < 14; index++){
        grade[a[index]/10]++;
    }
    // display
    for(auto index = grade.begin(); index != grade.end(); index++){
        printf("%d ",*index);
    }


    int array1[] = {0, 1, 2};
    vector<int> arr_vec(begin(array1),end(array1));





    return 0;
}
