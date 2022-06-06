#include "TresUIParts.h"

class UGFxObject;

int32 UTresUIParts::OnLoadIcon(const FString& Path) {
    return 0;
}

bool UTresUIParts::OnListRefreshData(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 ListIndex, int32 PrevListIndex) {
    return false;
}

bool UTresUIParts::OnListIndexChange(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 ListIndex, int32 PrevListIndex) {
    return false;
}

bool UTresUIParts::OnFocusOut(UGFxObject* UIComponent, bool MoveNext) {
    return false;
}

bool UTresUIParts::OnFocusIn(UGFxObject* UIComponent) {
    return false;
}

void UTresUIParts::OnFloatTextureCallback(int32 ID, UGFxObject* FloatTextureMovieClip) {
}

int32 UTresUIParts::OnCallback(int32 ID, int32 Param) {
    return 0;
}

bool UTresUIParts::OnAnchorOut(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 Index, int32 Dir) {
    return false;
}

bool UTresUIParts::OnAnchorIn(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 Index, int32 Dir) {
    return false;
}

UTresUIParts::UTresUIParts() {
    this->m_pMoviePlayer = NULL;
    this->m_ASProxyUIComponent = NULL;
    this->m_pUIManager = NULL;
    this->m_SwfMovie = NULL;
}

