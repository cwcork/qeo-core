/*
 * Copyright (c) 2016 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package module.first;

import java.util.Arrays;
import org.qeo.QeoType;

/**
 * this is the device ID generated by Qeo.
 */
@QeoType
public class Class1
{
    public long upper;

    public MyStructWithPrimitives[] MyUnbArrayOfStructWithPrimitives;

    public long lower;

    /**
     * Default constructor.  This is used by Qeo to construct new objects.
     */
    public Class1()
    {
    }

    @Override
    public boolean equals(Object obj)
    {
        if (obj == this) {
            return true;
        }
        if ((obj == null) || (obj.getClass() != this.getClass())) {
            return false;
        }
        final Class1 myObj = (Class1) obj;
        if (upper != myObj.upper) {
            return false;
        }
        if (!Arrays.equals(MyUnbArrayOfStructWithPrimitives, myObj.MyUnbArrayOfStructWithPrimitives)) {
            return false;
        }
        if (lower != myObj.lower) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode()
    {
        final int prime = 31;
        int result = 1;
        result = prime * result + (int) (upper ^ (upper >>> 32));
        result = prime * result + Arrays.hashCode(MyUnbArrayOfStructWithPrimitives);
        result = prime * result + (int) (lower ^ (lower >>> 32));
        return result;
    }
}
