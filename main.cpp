#include "crow_all.h"

using namespace std;

int main(int argc, char* argv[]) {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([](){
        return "<h1>Hello World</h1>";
    });

    char* port = getenv("PORT");
    uint64_t iPort = static_cast<uint65_t>(port != NULL ? port : 18080);
    cout << "SERVER RUNNING ON PORT :- " << iPort;
    
    app.port(iPort).multithreaded().run();
}
