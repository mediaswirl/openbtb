// ============================================================= //
//  btb
// Copyright ZKA Web Services.
// ============================================================= //

#pragma once

#include <Macros.h>

/// @brief Builder interface class.
/// @note This class is meant to be used as an interface.
class IManifestBuilder
{
public:
	explicit IManifestBuilder() = default;
	virtual ~IManifestBuilder() = default;

	IManifestBuilder& operator=(const IManifestBuilder&) = default;
	IManifestBuilder(const IManifestBuilder&)			 = default;

	/// @brief Builds a target.
	/// @param arg_sz filename size
	/// @param arg_val filename path.
	/// @retval true succeeded.
	/// @retval false failed.
	virtual bool buildTarget(int arg_sz, const char* arg_val) = 0;

	virtual const char* buildSystem() = 0;
};
