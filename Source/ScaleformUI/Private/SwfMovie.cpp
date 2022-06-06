#include "SwfMovie.h"

USwfMovie::USwfMovie() {
    this->bUseGFxExport = false;
    this->bOptimizeForMobiles = false;
    this->bSetSRGBOnImportedTextures = false;
    this->bPackTextures = false;
    this->PackTextureSize = 0;
    this->bForceSquarePacking = false;
    this->TextureRescale = FlashTextureScale_High;
    this->bReplaceImages = false;
    this->ImportTimeStamp = 0;
}

