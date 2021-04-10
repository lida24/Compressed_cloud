#include <queue>
//сервер на стороне клиента, принимает и обрабатывает запросы от synca
class NetworkClient {
public: 
    void RunClientServer();
private:
    void GetRequest();
    void PutItem(/*Item*/);
    void GetItem(/*Item*/);   
    std::queue <int> requests; //type ???
    //timeout ???
}