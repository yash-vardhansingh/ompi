/*
 * Copyright (c) 2016      Mellanox Technologies, Inc.
 *                         All rights reserved.
 * Copyright (c) 2018      IBM Corporation.  All rights reserved.
 * Copyright (c) 2018      Intel, Inc. All rights reserved.
 * Copyright (c) 2019      Research Organization for Information Science
 *                         and Technology (RIST).  All rights reserved.
 * Copyright (c) 2023      Nanook Consulting.  All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */


#ifndef PMIx_VERSION_H
#define PMIx_VERSION_H

/* define PMIx version */
#define PMIX_VERSION_MAJOR 5L
#define PMIX_VERSION_MINOR 0L
#define PMIX_VERSION_RELEASE 3L

#define PMIX_NUMERIC_VERSION 0x00050003


/* Define a mechanism by which we can flag PMIx versions
 * with "capabilities" - this allows consumers of the library
 * to differentiate based on capabilities instead of release
 * numbers. Note that this differs from the Standard version
 * and ABI version numbers for the release as the capabilities
 * refer to internal behaviors - e.g., how the cmd line parser
 * is operating. So someone who uses the cmd line parser might
 * compensate for some difference that occurs during/between
 * a PMIx release series
 */

/* Individual capability flags */
#define PMIX_CAP_BASE            1

/* These are the capabilities that this version of OpenPMIx has.
 * For now, we just define/use a "base" marker as a starting
 * point
 */
#define PMIX_CAPABILITIES \
    (PMIX_CAP_BASE)

#endif
