/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXqualified88"
 * 	found in "rfc3739-PKIXqualified88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "BiometricData.h"

static asn_TYPE_member_t asn_MBR_BiometricData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BiometricData, typeOfBiometricData),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_TypeOfBiometricData,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"typeOfBiometricData"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BiometricData, hashAlgorithm),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"hashAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BiometricData, biometricDataHash),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"biometricDataHash"
		},
	{ ATF_POINTER, 1, offsetof(struct BiometricData, sourceDataUri),
		(ASN_TAG_CLASS_UNIVERSAL | (22 << 2)),
		0,
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sourceDataUri"
		},
};
static const ber_tlv_tag_t asn_DEF_BiometricData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BiometricData_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* predefinedBiometricType */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 2, 0, 0 }, /* biometricDataHash */
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* biometricDataOid */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* hashAlgorithm */
    { (ASN_TAG_CLASS_UNIVERSAL | (22 << 2)), 3, 0, 0 } /* sourceDataUri */
};
static asn_SEQUENCE_specifics_t asn_SPC_BiometricData_specs_1 = {
	sizeof(struct BiometricData),
	offsetof(struct BiometricData, _asn_ctx),
	asn_MAP_BiometricData_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_BiometricData = {
	"BiometricData",
	"BiometricData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_BiometricData_tags_1,
	sizeof(asn_DEF_BiometricData_tags_1)
		/sizeof(asn_DEF_BiometricData_tags_1[0]), /* 1 */
	asn_DEF_BiometricData_tags_1,	/* Same as above */
	sizeof(asn_DEF_BiometricData_tags_1)
		/sizeof(asn_DEF_BiometricData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_BiometricData_1,
	4,	/* Elements count */
	&asn_SPC_BiometricData_specs_1	/* Additional specs */
};

