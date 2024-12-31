/*
 * Copyright 2019 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * This source code is part of the near-RT RIC (RAN Intelligent Controller)
 * platform project (RICP).
 */



/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asnFiles/X2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RadioframeAllocationPeriod.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_RadioframeAllocationPeriod_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RadioframeAllocationPeriod_value2enum_1[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_RadioframeAllocationPeriod_enum2value_1[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	3	/* n8(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_RadioframeAllocationPeriod_specs_1 = {
	asn_MAP_RadioframeAllocationPeriod_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RadioframeAllocationPeriod_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RadioframeAllocationPeriod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RadioframeAllocationPeriod = {
	"RadioframeAllocationPeriod",
	"RadioframeAllocationPeriod",
	&asn_OP_NativeEnumerated,
	asn_DEF_RadioframeAllocationPeriod_tags_1,
	sizeof(asn_DEF_RadioframeAllocationPeriod_tags_1)
		/sizeof(asn_DEF_RadioframeAllocationPeriod_tags_1[0]), /* 1 */
	asn_DEF_RadioframeAllocationPeriod_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioframeAllocationPeriod_tags_1)
		/sizeof(asn_DEF_RadioframeAllocationPeriod_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_RadioframeAllocationPeriod_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RadioframeAllocationPeriod_specs_1	/* Additional specs */
};

