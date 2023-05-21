#pragma once
#include "Framework.h"

namespace Building
{
	struct BuildPreviewPointer
	{
		unsigned char pad[0x1788];
		SDK::ABuildingPlayerPrimitivePreview* BuildPreviewMarker;
	};

	struct CurrentBuildableClassPointer
	{
		unsigned char pad[0x1940];
		SDK::UClass* CurrentBuildableClass;
	};

	struct AFortAsBuildPreviewMID
	{
	public:
		unsigned char UnknownData00[0x1928];
		SDK::UMaterialInstanceDynamic* BuildPreviewMarkerMID;
	};
}