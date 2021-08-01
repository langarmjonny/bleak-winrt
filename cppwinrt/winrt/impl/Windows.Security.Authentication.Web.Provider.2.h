// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210722.2

#pragma once
#ifndef WINRT_Windows_Security_Authentication_Web_Provider_2_H
#define WINRT_Windows_Security_Authentication_Web_Provider_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Provider
{
    struct __declspec(empty_bases) WebAccountClientView : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientView
    {
        WebAccountClientView(std::nullptr_t) noexcept {}
        WebAccountClientView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientView(ptr, take_ownership_from_abi) {}
        WebAccountClientView(winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, winrt::Windows::Foundation::Uri const& applicationCallbackUri);
        WebAccountClientView(winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, winrt::Windows::Foundation::Uri const& applicationCallbackUri, param::hstring const& accountPairwiseId);
    };
    struct WebAccountManager
    {
        WebAccountManager() = delete;
        static auto UpdateWebAccountPropertiesAsync(winrt::Windows::Security::Credentials::WebAccount const& webAccount, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& additionalProperties);
        static auto AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props);
        static auto DeleteWebAccountAsync(winrt::Windows::Security::Credentials::WebAccount const& webAccount);
        static auto FindAllProviderWebAccountsAsync();
        static auto PushCookiesAsync(winrt::Windows::Foundation::Uri const& uri, param::async_vector_view<winrt::Windows::Web::Http::HttpCookie> const& cookies);
        static auto SetViewAsync(winrt::Windows::Security::Credentials::WebAccount const& webAccount, winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientView const& view);
        static auto ClearViewAsync(winrt::Windows::Security::Credentials::WebAccount const& webAccount, winrt::Windows::Foundation::Uri const& applicationCallbackUri);
        static auto GetViewsAsync(winrt::Windows::Security::Credentials::WebAccount const& webAccount);
        static auto SetWebAccountPictureAsync(winrt::Windows::Security::Credentials::WebAccount const& webAccount, winrt::Windows::Storage::Streams::IRandomAccessStream const& webAccountPicture);
        static auto ClearWebAccountPictureAsync(winrt::Windows::Security::Credentials::WebAccount const& webAccount);
        static auto PullCookiesAsync(param::hstring const& uriString, param::hstring const& callerPFN);
        static auto FindAllProviderWebAccountsForUserAsync(winrt::Windows::System::User const& user);
        static auto AddWebAccountForUserAsync(winrt::Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props);
        static auto AddWebAccountForUserAsync(winrt::Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope);
        static auto AddWebAccountForUserAsync(winrt::Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId);
        static auto InvalidateAppCacheForAllAccountsAsync();
        static auto InvalidateAppCacheForAccountAsync(winrt::Windows::Security::Credentials::WebAccount const& webAccount);
        static auto AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId);
        static auto SetPerAppToPerUserAccountAsync(winrt::Windows::Security::Credentials::WebAccount const& perAppAccount, param::hstring const& perUserWebAccountId);
        static auto GetPerUserFromPerAppAccountAsync(winrt::Windows::Security::Credentials::WebAccount const& perAppAccount);
        static auto ClearPerUserFromPerAppAccountAsync(winrt::Windows::Security::Credentials::WebAccount const& perAppAccount);
        static auto AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope);
        static auto SetScopeAsync(winrt::Windows::Security::Credentials::WebAccount const& webAccount, winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope);
        static auto GetScope(winrt::Windows::Security::Credentials::WebAccount const& webAccount);
    };
    struct __declspec(empty_bases) WebAccountProviderAddAccountOperation : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation
    {
        WebAccountProviderAddAccountOperation(std::nullptr_t) noexcept {}
        WebAccountProviderAddAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderDeleteAccountOperation : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation,
        impl::require<WebAccountProviderDeleteAccountOperation, winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        WebAccountProviderDeleteAccountOperation(std::nullptr_t) noexcept {}
        WebAccountProviderDeleteAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderGetTokenSilentOperation : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation,
        impl::require<WebAccountProviderGetTokenSilentOperation, winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation, winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
    {
        WebAccountProviderGetTokenSilentOperation(std::nullptr_t) noexcept {}
        WebAccountProviderGetTokenSilentOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderManageAccountOperation : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation
    {
        WebAccountProviderManageAccountOperation(std::nullptr_t) noexcept {}
        WebAccountProviderManageAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderRequestTokenOperation : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation,
        impl::require<WebAccountProviderRequestTokenOperation, winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation, winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
    {
        WebAccountProviderRequestTokenOperation(std::nullptr_t) noexcept {}
        WebAccountProviderRequestTokenOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderRetrieveCookiesOperation : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation,
        impl::require<WebAccountProviderRetrieveCookiesOperation, winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        WebAccountProviderRetrieveCookiesOperation(std::nullptr_t) noexcept {}
        WebAccountProviderRetrieveCookiesOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderSignOutAccountOperation : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation,
        impl::require<WebAccountProviderSignOutAccountOperation, winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        WebAccountProviderSignOutAccountOperation(std::nullptr_t) noexcept {}
        WebAccountProviderSignOutAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebAccountProviderTriggerDetails : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects,
        impl::require<WebAccountProviderTriggerDetails, winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
    {
        WebAccountProviderTriggerDetails(std::nullptr_t) noexcept {}
        WebAccountProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebProviderTokenRequest : winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest,
        impl::require<WebProviderTokenRequest, winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2, winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest3>
    {
        WebProviderTokenRequest(std::nullptr_t) noexcept {}
        WebProviderTokenRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebProviderTokenResponse : winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse
    {
        WebProviderTokenResponse(std::nullptr_t) noexcept {}
        WebProviderTokenResponse(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse(ptr, take_ownership_from_abi) {}
        explicit WebProviderTokenResponse(winrt::Windows::Security::Authentication::Web::Core::WebTokenResponse const& webTokenResponse);
    };
}
#endif