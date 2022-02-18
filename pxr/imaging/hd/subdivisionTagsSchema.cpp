//
// Copyright 2021 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
////////////////////////////////////////////////////////////////////////
// This file is generated by a script.  Do not edit directly.  Edit the
// schema.template.cpp file to make changes.

#include "pxr/imaging/hd/subdivisionTagsSchema.h"
#include "pxr/imaging/hd/retainedDataSource.h"
#include "pxr/imaging/hd/meshSchema.h"

#include "pxr/base/trace/trace.h"


PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdSubdivisionTagsSchemaTokens,
    HDSUBDIVISIONTAGS_SCHEMA_TOKENS);



HdTokenDataSourceHandle
HdSubdivisionTagsSchema::GetFaceVaryingLinearInterpolation()
{
    return _GetTypedDataSource<HdTokenDataSource>(
        HdSubdivisionTagsSchemaTokens->faceVaryingLinearInterpolation);
}

HdTokenDataSourceHandle
HdSubdivisionTagsSchema::GetInterpolateBoundary()
{
    return _GetTypedDataSource<HdTokenDataSource>(
        HdSubdivisionTagsSchemaTokens->interpolateBoundary);
}

HdTokenDataSourceHandle
HdSubdivisionTagsSchema::GetTriangleSubdivisionRule()
{
    return _GetTypedDataSource<HdTokenDataSource>(
        HdSubdivisionTagsSchemaTokens->triangleSubdivisionRule);
}

HdIntArrayDataSourceHandle
HdSubdivisionTagsSchema::GetCornerIndices()
{
    return _GetTypedDataSource<HdIntArrayDataSource>(
        HdSubdivisionTagsSchemaTokens->cornerIndices);
}

HdFloatArrayDataSourceHandle
HdSubdivisionTagsSchema::GetCornerSharpnesses()
{
    return _GetTypedDataSource<HdFloatArrayDataSource>(
        HdSubdivisionTagsSchemaTokens->cornerSharpnesses);
}

HdIntArrayDataSourceHandle
HdSubdivisionTagsSchema::GetCreaseIndices()
{
    return _GetTypedDataSource<HdIntArrayDataSource>(
        HdSubdivisionTagsSchemaTokens->creaseIndices);
}

HdIntArrayDataSourceHandle
HdSubdivisionTagsSchema::GetCreaseLengths()
{
    return _GetTypedDataSource<HdIntArrayDataSource>(
        HdSubdivisionTagsSchemaTokens->creaseLengths);
}

HdFloatArrayDataSourceHandle
HdSubdivisionTagsSchema::GetCreaseSharpnesses()
{
    return _GetTypedDataSource<HdFloatArrayDataSource>(
        HdSubdivisionTagsSchemaTokens->creaseSharpnesses);
}

/*static*/
HdContainerDataSourceHandle
HdSubdivisionTagsSchema::BuildRetained(
        const HdTokenDataSourceHandle &faceVaryingLinearInterpolation,
        const HdTokenDataSourceHandle &interpolateBoundary,
        const HdTokenDataSourceHandle &triangleSubdivisionRule,
        const HdIntArrayDataSourceHandle &cornerIndices,
        const HdFloatArrayDataSourceHandle &cornerSharpnesses,
        const HdIntArrayDataSourceHandle &creaseIndices,
        const HdIntArrayDataSourceHandle &creaseLengths,
        const HdFloatArrayDataSourceHandle &creaseSharpnesses
)
{
    TfToken names[8];
    HdDataSourceBaseHandle values[8];

    size_t count = 0;
    if (faceVaryingLinearInterpolation) {
        names[count] = HdSubdivisionTagsSchemaTokens->faceVaryingLinearInterpolation;
        values[count++] = faceVaryingLinearInterpolation;
    }

    if (interpolateBoundary) {
        names[count] = HdSubdivisionTagsSchemaTokens->interpolateBoundary;
        values[count++] = interpolateBoundary;
    }

    if (triangleSubdivisionRule) {
        names[count] = HdSubdivisionTagsSchemaTokens->triangleSubdivisionRule;
        values[count++] = triangleSubdivisionRule;
    }

    if (cornerIndices) {
        names[count] = HdSubdivisionTagsSchemaTokens->cornerIndices;
        values[count++] = cornerIndices;
    }

    if (cornerSharpnesses) {
        names[count] = HdSubdivisionTagsSchemaTokens->cornerSharpnesses;
        values[count++] = cornerSharpnesses;
    }

    if (creaseIndices) {
        names[count] = HdSubdivisionTagsSchemaTokens->creaseIndices;
        values[count++] = creaseIndices;
    }

    if (creaseLengths) {
        names[count] = HdSubdivisionTagsSchemaTokens->creaseLengths;
        values[count++] = creaseLengths;
    }

    if (creaseSharpnesses) {
        names[count] = HdSubdivisionTagsSchemaTokens->creaseSharpnesses;
        values[count++] = creaseSharpnesses;
    }

    return HdRetainedContainerDataSource::New(count, names, values);
}

/*static*/
HdSubdivisionTagsSchema
HdSubdivisionTagsSchema::GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer)
{
    return HdSubdivisionTagsSchema(
        fromParentContainer
        ? HdContainerDataSource::Cast(fromParentContainer->Get(
                HdSubdivisionTagsSchemaTokens->subdivisionTags))
        : nullptr);
}

/*static*/
const HdDataSourceLocator &
HdSubdivisionTagsSchema::GetDefaultLocator()
{
    static const HdDataSourceLocator locator(
        HdMeshSchemaTokens->mesh,
        HdSubdivisionTagsSchemaTokens->subdivisionTags
    );
    return locator;
} 
HdSubdivisionTagsSchema::Builder &
HdSubdivisionTagsSchema::Builder::SetFaceVaryingLinearInterpolation(
    const HdTokenDataSourceHandle &faceVaryingLinearInterpolation)
{
    _faceVaryingLinearInterpolation = faceVaryingLinearInterpolation;
    return *this;
}

HdSubdivisionTagsSchema::Builder &
HdSubdivisionTagsSchema::Builder::SetInterpolateBoundary(
    const HdTokenDataSourceHandle &interpolateBoundary)
{
    _interpolateBoundary = interpolateBoundary;
    return *this;
}

HdSubdivisionTagsSchema::Builder &
HdSubdivisionTagsSchema::Builder::SetTriangleSubdivisionRule(
    const HdTokenDataSourceHandle &triangleSubdivisionRule)
{
    _triangleSubdivisionRule = triangleSubdivisionRule;
    return *this;
}

HdSubdivisionTagsSchema::Builder &
HdSubdivisionTagsSchema::Builder::SetCornerIndices(
    const HdIntArrayDataSourceHandle &cornerIndices)
{
    _cornerIndices = cornerIndices;
    return *this;
}

HdSubdivisionTagsSchema::Builder &
HdSubdivisionTagsSchema::Builder::SetCornerSharpnesses(
    const HdFloatArrayDataSourceHandle &cornerSharpnesses)
{
    _cornerSharpnesses = cornerSharpnesses;
    return *this;
}

HdSubdivisionTagsSchema::Builder &
HdSubdivisionTagsSchema::Builder::SetCreaseIndices(
    const HdIntArrayDataSourceHandle &creaseIndices)
{
    _creaseIndices = creaseIndices;
    return *this;
}

HdSubdivisionTagsSchema::Builder &
HdSubdivisionTagsSchema::Builder::SetCreaseLengths(
    const HdIntArrayDataSourceHandle &creaseLengths)
{
    _creaseLengths = creaseLengths;
    return *this;
}

HdSubdivisionTagsSchema::Builder &
HdSubdivisionTagsSchema::Builder::SetCreaseSharpnesses(
    const HdFloatArrayDataSourceHandle &creaseSharpnesses)
{
    _creaseSharpnesses = creaseSharpnesses;
    return *this;
}

HdContainerDataSourceHandle
HdSubdivisionTagsSchema::Builder::Build()
{
    return HdSubdivisionTagsSchema::BuildRetained(
        _faceVaryingLinearInterpolation,
        _interpolateBoundary,
        _triangleSubdivisionRule,
        _cornerIndices,
        _cornerSharpnesses,
        _creaseIndices,
        _creaseLengths,
        _creaseSharpnesses
    );
}


PXR_NAMESPACE_CLOSE_SCOPE