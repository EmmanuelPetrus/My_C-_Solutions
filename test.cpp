#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YouTubeChannel
{
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount)
    {
        Name = name;
        SubscribersCount = subscribersCount;
    }
};

ostream &operator<<(ostream &COUT, YouTubeChannel &ytchannel)
{
    COUT << "Name: " << ytchannel.Name << endl;
    COUT << "Subscribers: " << ytchannel.SubscribersCount << endl;
    return COUT;
};

struct MyCollection
{
    list<YouTubeChannel> myChannels;

    void operator+=(YouTubeChannel &channel)
    {
        this->myChannels.push_back(channel);
    }
};

ostream &operator<<(ostream &COUT, MyCollection &MY_COLL)
{
    for(YouTubeChannel ytChannel:MY_COLL.myChannels)
        COUT << ytChannel<<endl;
    return COUT;
}
int main(int argc, char const *argv[])
{
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("Channel2", 85000);
    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;

    cout << myCollection;
    // cout << yt1 << yt2;
    // operator<<(cout,yt1);
    return 0;
}
