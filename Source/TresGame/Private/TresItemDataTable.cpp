#include "TresItemDataTable.h"

FTresItemDataTable::FTresItemDataTable() {
    this->m_Category = ETresItemCategory::CAT_NONE;
    this->m_UIPriority = 0;
    this->m_CategoryIcon = ETresItemCategoryIcon::NONE;
    this->m_ItemRank = ETresItemRank::NOTHING;
    this->m_BuyPrice = 0;
    this->m_SellPrice = 0;
    this->m_ShopLevel = 0;
    this->m_GumiShopLevel = 0;
    this->m_bNeedMogCard = false;
    this->m_UnlockFlagIndex = 0;
    this->m_bCanSell = false;
    this->m_bCanDrop = false;
    this->m_bCanbeSoldOut = false;
    this->m_MaxNum = 0;
}

