#include "Worker.h"

Worker::Worker(int ElementID, TimeOffset, IPackageQueue *_packageQueue) {

}


void Worker::doWork() {

}

TimeOffset Worker::getProcessingDuration() {
    return processingDuration;
}

Time Worker::getProcessingStartTime() {
    return packageProcessingStartTime;
}



ElementID Worker::getId() {
    return workerID;
}

void Worker::receivePackage(Package _package) {

}

Package *Worker::viewDepot() {

}

ReceiverType Worker::getReceiverType() {
    return ReceiverType ::WORKER;
}
