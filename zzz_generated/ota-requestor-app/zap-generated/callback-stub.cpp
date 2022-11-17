/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#include <app-common/zap-generated/callback.h>
#include <app-common/zap-generated/cluster-id.h>
#include <lib/support/Span.h>
#include <protocols/interaction_model/Constants.h>

using namespace chip;

// Cluster Init Functions
void emberAfClusterInitCallback(EndpointId endpoint, ClusterId clusterId)
{
    switch (clusterId)
    {
    case ZCL_ACCESS_CONTROL_CLUSTER_ID:
        emberAfAccessControlClusterInitCallback(endpoint);
        break;
    case ZCL_ADMINISTRATOR_COMMISSIONING_CLUSTER_ID:
        emberAfAdministratorCommissioningClusterInitCallback(endpoint);
        break;
    case ZCL_BASIC_CLUSTER_ID:
        emberAfBasicClusterInitCallback(endpoint);
        break;
    case ZCL_DESCRIPTOR_CLUSTER_ID:
        emberAfDescriptorClusterInitCallback(endpoint);
        break;
    case ZCL_FIXED_LABEL_CLUSTER_ID:
        emberAfFixedLabelClusterInitCallback(endpoint);
        break;
    case ZCL_GENERAL_COMMISSIONING_CLUSTER_ID:
        emberAfGeneralCommissioningClusterInitCallback(endpoint);
        break;
    case ZCL_GENERAL_DIAGNOSTICS_CLUSTER_ID:
        emberAfGeneralDiagnosticsClusterInitCallback(endpoint);
        break;
    case ZCL_GROUP_KEY_MANAGEMENT_CLUSTER_ID:
        emberAfGroupKeyManagementClusterInitCallback(endpoint);
        break;
    case ZCL_GROUPS_CLUSTER_ID:
        emberAfGroupsClusterInitCallback(endpoint);
        break;
    case ZCL_IDENTIFY_CLUSTER_ID:
        emberAfIdentifyClusterInitCallback(endpoint);
        break;
    case ZCL_LOCALIZATION_CONFIGURATION_CLUSTER_ID:
        emberAfLocalizationConfigurationClusterInitCallback(endpoint);
        break;
    case ZCL_NETWORK_COMMISSIONING_CLUSTER_ID:
        emberAfNetworkCommissioningClusterInitCallback(endpoint);
        break;
    case ZCL_OTA_SOFTWARE_UPDATE_PROVIDER_CLUSTER_ID:
        emberAfOtaSoftwareUpdateProviderClusterInitCallback(endpoint);
        break;
    case ZCL_OTA_SOFTWARE_UPDATE_REQUESTOR_CLUSTER_ID:
        emberAfOtaSoftwareUpdateRequestorClusterInitCallback(endpoint);
        break;
    case ZCL_ON_OFF_CLUSTER_ID:
        emberAfOnOffClusterInitCallback(endpoint);
        break;
    case ZCL_OPERATIONAL_CREDENTIALS_CLUSTER_ID:
        emberAfOperationalCredentialsClusterInitCallback(endpoint);
        break;
    case ZCL_TIME_FORMAT_LOCALIZATION_CLUSTER_ID:
        emberAfTimeFormatLocalizationClusterInitCallback(endpoint);
        break;
    case ZCL_USER_LABEL_CLUSTER_ID:
        emberAfUserLabelClusterInitCallback(endpoint);
        break;
    default:
        // Unrecognized cluster ID
        break;
    }
}

void __attribute__((weak)) emberAfAccessControlClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfAdministratorCommissioningClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfBasicClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfDescriptorClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfFixedLabelClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfGeneralCommissioningClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfGeneralDiagnosticsClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfGroupKeyManagementClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfGroupsClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfIdentifyClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfLocalizationConfigurationClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfNetworkCommissioningClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfOtaSoftwareUpdateProviderClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfOtaSoftwareUpdateRequestorClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfOnOffClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfOperationalCredentialsClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfTimeFormatLocalizationClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
void __attribute__((weak)) emberAfUserLabelClusterInitCallback(EndpointId endpoint)
{
    // To prevent warning
    (void) endpoint;
}
