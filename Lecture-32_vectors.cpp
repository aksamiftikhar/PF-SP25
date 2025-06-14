#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //    vector<int> v1;
    //    v1.push_back(10);
    //    cout<<v1.size();
    //    cout<<v1[0]<<endl;

    //    vector<int> myVec(10, 9);
    //    myVec[2] = 10;
    //    myVec.push_back(100);
    //    cout<<myVec.size();
    //    for(int i=0;i<myVec.size();i++)
    //        cout<<myVec[i]<<endl;

    //    vector<int> myVec2(v1);
    //    cout<<myVec2[0]<<endl;
    //
    //
    //    myVec2[0] = 20;
    //
    //    cout<<v1[0]<<endl;
    //    cout<<myVec2[0]<<endl;
    //
    ////
    //    for(int i=0;i<myVec.size();i++)
    //        cout<<myVec[i]<<endl;
    //
    //    cout<<endl;
    //
    //    for(int i=0;i<myVec.size();i++)
    //        cout<<myVec2[i]<<endl;

    std::vector<int> vecList;

    // Testing push_back()
    vecList.push_back(10);
    vecList.push_back(20);
    vecList.push_back(30);
    for (int i = 0; i < vecList.size(); i++)
        cout << vecList[i] << endl;

    vecList.resize(10); // Fills index 3–10 with default `0` (for int)

    for (int i = 0; i < vecList.size(); i++)
        cout << vecList[i] << endl;
    //    vecList[9] = 100;
    //    cout<<vecList[8]<<" "<<vecList[9]<<endl;

    // Testing at() and []
    std::cout << "vecList.at(1): " << vecList.at(1) << std::endl;
    std::cout << "vecList[2]: " << vecList[1] << std::endl;

    // Testing front() and back()
    std::cout << "Front element: " << vecList.front() << std::endl;
    vecList.erase(0);
    std::cout << "Back element: " << vecList.back() << std::endl;

    // Testing size() and max_size()
    std::cout << "Current size: " << vecList.size() << std::endl;
    std::cout << "Maximum size possible: " << vecList.max_size() << std::endl;

    // Testing empty()
    std::cout << "Is vector empty? " << (vecList.empty() ? "Yes" : "No") << std::endl;

    // Testing pop_back()
    std::cout << "After pop_back(), new back element: " << vecList.back() << std::endl;

    // Testing clear()
    vecList.clear();
    cout << "size is: " << vecList.size() << endl;
    std::cout << "After clear(), is vector empty? " << (vecList.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
