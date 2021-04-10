#include <aws/core/Aws.h>

// соединение с амазоном
class NetworkStorage {
public:
    NetworkStorage(); // получение информации о клиенте
    ~NetworkStorage(); // ???
    void ConnectDynamoDB();
    void DisconnectDynamoDB();
    // таймауты???
private:
    void GetInfoUser(); // void???
    Aws::string table; // получаем от GetInfo, в этой таблице хранятся данные юзера
    //каждому группе отслеживаемых клиентов своя таблица ???
}