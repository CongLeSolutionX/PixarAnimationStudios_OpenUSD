//
// Copyright 2023 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* **                                                                      ** */
/* ** This file is generated by a script.                                  ** */
/* **                                                                      ** */
/* ** Do not edit it directly (unless it is within a CUSTOM CODE section)! ** */
/* ** Edit hdSchemaDefs.py instead to make changes.                        ** */
/* **                                                                      ** */
/* ************************************************************************** */

#include "hdPrman/rileyClippingPlanePrim.h"

#ifdef HDPRMAN_USE_SCENE_INDEX_OBSERVER

#include "hdPrman/rileyIds.h"
#include "hdPrman/rileyTypes.h"

#include "hdPrman/rileyClippingPlaneSchema.h"
#include "hdPrman/utils.h"

#include "pxr/imaging/hd/sceneIndex.h"

PXR_NAMESPACE_OPEN_SCOPE

HdPrman_RileyClippingPlanePrim::HdPrman_RileyClippingPlanePrim(
    HdContainerDataSourceHandle const &primSource,
    const HdsiPrimManagingSceneIndexObserver * const observer,
    HdPrman_RenderParam * const renderParam)
  : HdPrman_RileyPrimBase(renderParam)
{
    HdPrmanRileyClippingPlaneSchema schema =
        HdPrmanRileyClippingPlaneSchema::GetFromParent(primSource);


    HdPrman_RileyTransform xform =
        HdPrman_RileyTransform(
            schema.GetXform(),
            _GetShutterInterval());

    HdPrman_RileyParamList params =
        HdPrman_RileyParamList(
            schema.GetParams());


    _rileyId = _AcquireRiley()->CreateClippingPlane(
        xform.rileyObject,
        params.rileyObject);

// --(BEGIN CUSTOM CODE: Constructor)--
// --(END CUSTOM CODE: Constructor)--
}

void
HdPrman_RileyClippingPlanePrim::_Dirty(
    const HdSceneIndexObserver::DirtiedPrimEntry &entry,
    const HdsiPrimManagingSceneIndexObserver * const observer)
{
    HdPrmanRileyClippingPlaneSchema schema =
        HdPrmanRileyClippingPlaneSchema::GetFromParent(
            observer->GetSceneIndex()->GetPrim(entry.primPath).dataSource);


    std::optional<HdPrman_RileyTransform> xform;
    if (entry.dirtyLocators.Intersects(
            HdPrmanRileyClippingPlaneSchema::GetXformLocator())) {
        xform =
            HdPrman_RileyTransform(
                schema.GetXform(),
                _GetShutterInterval());
    };

    std::optional<HdPrman_RileyParamList> params;
    if (entry.dirtyLocators.Intersects(
            HdPrmanRileyClippingPlaneSchema::GetParamsLocator())) {
        params =
            HdPrman_RileyParamList(
                schema.GetParams());
    };


    _AcquireRiley()->ModifyClippingPlane(_rileyId,
        HdPrman_GetRileyObjectPtr(xform),
        HdPrman_GetRileyObjectPtr(params)
// --(BEGIN CUSTOM CODE: Modify)--
// --(END CUSTOM CODE: Modify)--
        );


}

HdPrman_RileyClippingPlanePrim::~HdPrman_RileyClippingPlanePrim()
{
    _AcquireRiley()->DeleteClippingPlane(_rileyId
// --(BEGIN CUSTOM CODE: Delete)--
// --(END CUSTOM CODE: Delete)--
        );

}

PXR_NAMESPACE_CLOSE_SCOPE

#endif // #ifdef HDPRMAN_USE_SCENE_INDEX_OBSERVER