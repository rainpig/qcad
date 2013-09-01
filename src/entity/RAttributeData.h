/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

#ifndef RATTRIBUTEDATA_H
#define RATTRIBUTEDATA_H

#include "entity_global.h"

#include <QTextLayout>

#include "RBlockReferenceEntity.h"
#include "RDocument.h"
#include "RTextData.h"

/**
 * Stores and manages all data that defines the geometry and
 * appearance of a block attribute entity.
 *
 * \scriptable
 * \sharedPointerSupport
 * \copyable
 * \ingroup core
 */
class QCADENTITY_EXPORT RAttributeData: public RTextBasedData {
    friend class RAttributeEntity;

protected:
    RAttributeData(RDocument* document, const RAttributeData& data);

public:
    RAttributeData() {}
    RAttributeData(const RTextBasedData& textData, RBlockReferenceEntity::Id blockReferenceId, const QString& tag);
    virtual ~RAttributeData() {}

//    virtual void setSelected(bool on) {
//        Q_ASSERT(false);
//        Q_UNUSED(on)
//        return;
//    }

//    virtual RBox getBoundingBox() const {
//        return RBox();
//    }

//    virtual double getDistanceTo(const RVector& point, bool limited, double range, bool draft) const {
//        Q_UNUSED(point)
//        Q_UNUSED(limited)
//        Q_UNUSED(range)
//        Q_UNUSED(draft)

//        return RNANDOUBLE;
//    }

    QString getTag() const {
        return tag;
    }

    void setTag(const QString& t) {
        tag = t;
    }

//    RBlockReferenceEntity::Id getBlockReferenceId() const {
//        return blockReferenceId;
//    }

    /**
     * \nonscriptable
     */
    friend QDebug operator<<(QDebug dbg, const RAttributeData& t);

private:
    QString tag;

    /**
     * ID of the block reference this attribute belongs to.
     */
    //RBlockReferenceEntity::Id blockReferenceId;
};

Q_DECLARE_METATYPE(RAttributeData)
Q_DECLARE_METATYPE(RAttributeData*)
Q_DECLARE_METATYPE(QSharedPointer<RAttributeData>)
Q_DECLARE_METATYPE(QSharedPointer<RAttributeData>*)

#endif
