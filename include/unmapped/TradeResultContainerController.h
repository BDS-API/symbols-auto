#pragma once

class TradeResultContainerController : ContainerController {

public:
    virtual TradeResultContainerController::~TradeResultContainerController();
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableAddCount(int)const;

    TradeResultContainerController(std::shared_ptr<ContainerModel>);
};
