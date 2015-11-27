#ifndef MESOS_MODULE_FLOCKER_HTTPS_CLIENT_H
#define MESOS_MODULE_FLOCKER_HTTPS_CLIENT_H

#include <string>
#include <stout/try.hpp>
#include <stout/uuid.hpp>

using namespace std;

/**
 * Client for interacting with the Flocker Control Service.
 *
 * Supports retrieving the node id and creating a dataset.
 */
class FlockerControlServiceClient
{
public:

    FlockerControlServiceClient(const string flockerControlIp, uint16_t flockerControlPort);

    Try<string> getNodeId();

    Try<string> createDataSet(UUID uuid);

    uint16_t getFlockerControlPort();

    std::string getFlockerControlIp();

private:

    std::string flockerControlIp;

    uint16_t flockerControlPort;

};

#endif //MESOS_MODULE_FLOCKER_HTTPS_CLIENT_H