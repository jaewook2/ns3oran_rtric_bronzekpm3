/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "ResultsPerSSB-Index.h"

#include "MeasQuantityResults.h"
asn_TYPE_member_t asn_MBR_ResultsPerSSB_Index_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ResultsPerSSB_Index, ssb_Index),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_Index,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ssb-Index"
		},
	{ ATF_POINTER, 1, offsetof(struct ResultsPerSSB_Index, ssb_Results),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasQuantityResults,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ssb-Results"
		},
};
static const int asn_MAP_ResultsPerSSB_Index_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_ResultsPerSSB_Index_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ResultsPerSSB_Index_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-Index */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ssb-Results */
};
asn_SEQUENCE_specifics_t asn_SPC_ResultsPerSSB_Index_specs_1 = {
	sizeof(struct ResultsPerSSB_Index),
	offsetof(struct ResultsPerSSB_Index, _asn_ctx),
	asn_MAP_ResultsPerSSB_Index_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ResultsPerSSB_Index_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ResultsPerSSB_Index = {
	"ResultsPerSSB-Index",
	"ResultsPerSSB-Index",
	&asn_OP_SEQUENCE,
	asn_DEF_ResultsPerSSB_Index_tags_1,
	sizeof(asn_DEF_ResultsPerSSB_Index_tags_1)
		/sizeof(asn_DEF_ResultsPerSSB_Index_tags_1[0]), /* 1 */
	asn_DEF_ResultsPerSSB_Index_tags_1,	/* Same as above */
	sizeof(asn_DEF_ResultsPerSSB_Index_tags_1)
		/sizeof(asn_DEF_ResultsPerSSB_Index_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ResultsPerSSB_Index_1,
	2,	/* Elements count */
	&asn_SPC_ResultsPerSSB_Index_specs_1	/* Additional specs */
};

