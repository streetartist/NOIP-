from collections import deque

graph = {}
graph["you"] = ["alice","bob","claire"]
graph["bob"] = ["anuj","peggy"]
graph["alice"] = ["peggy"]
graph["claire"] = ["thom","jonny"]
graph["anuj"] = {}
graph["peggy"] = {}
graph["thom"] = {}
graph["jonny"] = {}



def person_is_seller(name):
    return name[-1] == 'm'

def search(name):
    search_deque = deque()
    search_deque += graph[name]
    searched = []
    while search_deque:
        person = search_deque.popleft()
        if not person in searched:
            if person_is_seller(person):
                print(person + " is a mango seller!")
                return True
            else:
                search_deque += graph[person]
                searched.append(person)
    return False

search("you")