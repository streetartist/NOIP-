#include<iostream>
#include<map>
#include<list>
#include<string>
#include<queue>
using namespace std;

map<string,list<string> > graph;

bool person_is_seller(string name)
{
    return name[name.size() -1] == 'm';
}

void search(string name)
{
    bool find_person = false;
    string person;
    queue<string> search_deque;

    list<string>::iterator it; //声明一个迭代器
    for(it = graph[name].begin();it != graph[name].end();it++)
    {
        search_deque.push(*it);
    }

    list<string> searched; //需要用构造函数初始化
    while(search_deque.empty())
    {
        search_deque.pop();
        person = search_deque.back();
        // 查找searched中是否有元素person
        list<string>::iterator it; //声明一个迭代器
        for(it = searched.begin();it != searched.end();it++)
        {
            if(*it == person)
            {
                find_person = true;
            }
        }

        if(!find_person) // 没找到
        {
            if(person_is_seller(person))
            {
                cout<<person + " is a mango seller!";
                //return true;
            }
            else
            {
                list<string>::iterator it; //声明一个迭代器
                for(it = graph[person].begin();it != graph[person].end();it++)
                {
                    search_deque.push(*it);
                }
                searched.push_back(person);
            }
        }
    }
    // return false;
}

int main()
{
    graph["you"] = {"alice","bob","claire"};
    graph["bob"] = {"anuj","peggy"};
    graph["alice"] = {"peggy"};
    graph["claire"] = {"thom","jonny"};
    graph["anuj"] = {};
    graph["peggy"] = {};
    graph["thom"] = {};
    graph["jonny"] = {};

    search("you");
}









