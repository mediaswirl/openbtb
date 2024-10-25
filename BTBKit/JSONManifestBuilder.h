// ============================================================= //
//  btb
// Copyright ZKA Web Services.
// ============================================================= //

#pragma once

#include <IManifestBuilder.h>
#include <json.h>

/// @brief JSON builder
class JSONManifestBuilder final : public IManifestBuilder
{
public:
	explicit JSONManifestBuilder() = default;
	virtual ~JSONManifestBuilder() override = default;

	JSONManifestBuilder& operator=(const JSONManifestBuilder&) = default;
	JSONManifestBuilder(const JSONManifestBuilder&)			   = default;

public:
	/// @brief Builds a JSON target.
	/// @param arg_sz filename size
	/// @param arg_val filename path.
	/// @retval true build succeeded.
	/// @retval false failed to build.
	virtual bool buildTarget(int arg_sz, const char* arg_val) override;

	virtual const char* buildSystem() override;
};
