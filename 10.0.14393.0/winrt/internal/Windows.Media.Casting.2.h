// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Casting.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_3e1fe603_f897_5263_b328_0806426b8a79
#define WINRT_GENERIC_3e1fe603_f897_5263_b328_0806426b8a79
template <> struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79")) __declspec(novtable) IAsyncOperation<hstring> : impl_IAsyncOperation<hstring> {};
#endif

#ifndef WINRT_GENERIC_f1576170_9b08_5a9b_87d2_c1ac47bc6681
#define WINRT_GENERIC_f1576170_9b08_5a9b_87d2_c1ac47bc6681
template <> struct __declspec(uuid("f1576170-9b08-5a9b-87d2-c1ac47bc6681")) __declspec(novtable) TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_78afbbd0_9811_5f0e_9566_47c3e8cdd929
#define WINRT_GENERIC_78afbbd0_9811_5f0e_9566_47c3e8cdd929
template <> struct __declspec(uuid("78afbbd0-9811-5f0e-9566-47c3e8cdd929")) __declspec(novtable) TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> : impl_TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> {};
#endif

#ifndef WINRT_GENERIC_25c821bc_deb8_5850_8af2_d3ac35426bd2
#define WINRT_GENERIC_25c821bc_deb8_5850_8af2_d3ac35426bd2
template <> struct __declspec(uuid("25c821bc-deb8-5850-8af2-d3ac35426bd2")) __declspec(novtable) IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> : impl_IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> {};
#endif

#ifndef WINRT_GENERIC_dff10e53_4c5e_5dba_9269_cd61881bb8b3
#define WINRT_GENERIC_dff10e53_4c5e_5dba_9269_cd61881bb8b3
template <> struct __declspec(uuid("dff10e53-4c5e-5dba-9269-cd61881bb8b3")) __declspec(novtable) IAsyncOperation<winrt::Windows::Media::Casting::CastingPlaybackTypes> : impl_IAsyncOperation<winrt::Windows::Media::Casting::CastingPlaybackTypes> {};
#endif

#ifndef WINRT_GENERIC_1b4ee058_4c69_5e70_8834_c1d171cc1b22
#define WINRT_GENERIC_1b4ee058_4c69_5e70_8834_c1d171cc1b22
template <> struct __declspec(uuid("1b4ee058-4c69-5e70-8834-c1d171cc1b22")) __declspec(novtable) IAsyncOperation<Windows::Media::Casting::CastingDevice> : impl_IAsyncOperation<Windows::Media::Casting::CastingDevice> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_c2e3dea8_92e0_50af_9c93_83b3e86b73b4
#define WINRT_GENERIC_c2e3dea8_92e0_50af_9c93_83b3e86b73b4
template <> struct __declspec(uuid("c2e3dea8-92e0-50af-9c93-83b3e86b73b4")) __declspec(novtable) IVector<Windows::Media::Casting::CastingSource> : impl_IVector<Windows::Media::Casting::CastingSource> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b3655b33_c4ad_5f4c_a187_b2e4c770a16b
#define WINRT_GENERIC_b3655b33_c4ad_5f4c_a187_b2e4c770a16b
template <> struct __declspec(uuid("b3655b33-c4ad-5f4c-a187-b2e4c770a16b")) __declspec(novtable) TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> : impl_TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_a64b972b_aa63_5c61_9cde_cd6ffea8a247
#define WINRT_GENERIC_a64b972b_aa63_5c61_9cde_cd6ffea8a247
template <> struct __declspec(uuid("a64b972b-aa63-5c61-9cde-cd6ffea8a247")) __declspec(novtable) TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif

#ifndef WINRT_GENERIC_b79a741f_7fb5_50ae_9e99_911201ec3d41
#define WINRT_GENERIC_b79a741f_7fb5_50ae_9e99_911201ec3d41
template <> struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41")) __declspec(novtable) AsyncOperationCompletedHandler<hstring> : impl_AsyncOperationCompletedHandler<hstring> {};
#endif

#ifndef WINRT_GENERIC_7216a94a_a10a_5763_8e96_bf33c582ed92
#define WINRT_GENERIC_7216a94a_a10a_5763_8e96_bf33c582ed92
template <> struct __declspec(uuid("7216a94a-a10a-5763-8e96-bf33c582ed92")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> {};
#endif

#ifndef WINRT_GENERIC_b55e550c_dfa8_50be_be8f_5d42c9dac120
#define WINRT_GENERIC_b55e550c_dfa8_50be_be8f_5d42c9dac120
template <> struct __declspec(uuid("b55e550c-dfa8-50be-be8f-5d42c9dac120")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Media::Casting::CastingPlaybackTypes> : impl_AsyncOperationCompletedHandler<winrt::Windows::Media::Casting::CastingPlaybackTypes> {};
#endif

#ifndef WINRT_GENERIC_f0c69b9e_14cb_510a_8ef0_7e86d771baaf
#define WINRT_GENERIC_f0c69b9e_14cb_510a_8ef0_7e86d771baaf
template <> struct __declspec(uuid("f0c69b9e-14cb-510a-8ef0-7e86d771baaf")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Casting::CastingDevice> : impl_AsyncOperationCompletedHandler<Windows::Media::Casting::CastingDevice> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_3f6c93e9_cc77_5ef4_b2b7_25cfcfc09720
#define WINRT_GENERIC_3f6c93e9_cc77_5ef4_b2b7_25cfcfc09720
template <> struct __declspec(uuid("3f6c93e9-cc77-5ef4-b2b7-25cfcfc09720")) __declspec(novtable) IIterator<Windows::Media::Casting::CastingSource> : impl_IIterator<Windows::Media::Casting::CastingSource> {};
#endif

#ifndef WINRT_GENERIC_1abb2cc9_46a2_58b1_91aa_28699d66d1ab
#define WINRT_GENERIC_1abb2cc9_46a2_58b1_91aa_28699d66d1ab
template <> struct __declspec(uuid("1abb2cc9-46a2-58b1-91aa-28699d66d1ab")) __declspec(novtable) IIterable<Windows::Media::Casting::CastingSource> : impl_IIterable<Windows::Media::Casting::CastingSource> {};
#endif

#ifndef WINRT_GENERIC_7828da61_dea4_5485_b27a_8f78e0472402
#define WINRT_GENERIC_7828da61_dea4_5485_b27a_8f78e0472402
template <> struct __declspec(uuid("7828da61-dea4-5485-b27a-8f78e0472402")) __declspec(novtable) IVectorView<Windows::Media::Casting::CastingSource> : impl_IVectorView<Windows::Media::Casting::CastingSource> {};
#endif


}

namespace Windows::Media::Casting {

template <typename D>
struct WINRT_EBO impl_ICastingConnection
{
    Windows::Media::Casting::CastingConnectionState State() const;
    Windows::Media::Casting::CastingDevice Device() const;
    Windows::Media::Casting::CastingSource Source() const;
    void Source(const Windows::Media::Casting::CastingSource & value) const;
    event_token StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::IInspectable> & handler) const;
    using StateChanged_revoker = event_revoker<ICastingConnection>;
    StateChanged_revoker StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::IInspectable> & handler) const;
    void StateChanged(event_token token) const;
    event_token ErrorOccurred(const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> & handler) const;
    using ErrorOccurred_revoker = event_revoker<ICastingConnection>;
    ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingConnection, Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs> & handler) const;
    void ErrorOccurred(event_token token) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> RequestStartCastingAsync(const Windows::Media::Casting::CastingSource & value) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> DisconnectAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ICastingConnectionErrorOccurredEventArgs
{
    Windows::Media::Casting::CastingConnectionErrorStatus ErrorStatus() const;
    hstring Message() const;
};

template <typename D>
struct WINRT_EBO impl_ICastingDevice
{
    hstring Id() const;
    hstring FriendlyName() const;
    Windows::Storage::Streams::IRandomAccessStreamWithContentType Icon() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Casting::CastingPlaybackTypes> GetSupportedCastingPlaybackTypesAsync() const;
    Windows::Media::Casting::CastingConnection CreateCastingConnection() const;
};

template <typename D>
struct WINRT_EBO impl_ICastingDevicePicker
{
    Windows::Media::Casting::CastingDevicePickerFilter Filter() const;
    Windows::Devices::Enumeration::DevicePickerAppearance Appearance() const;
    event_token CastingDeviceSelected(const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> & handler) const;
    using CastingDeviceSelected_revoker = event_revoker<ICastingDevicePicker>;
    CastingDeviceSelected_revoker CastingDeviceSelected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::Media::Casting::CastingDeviceSelectedEventArgs> & handler) const;
    void CastingDeviceSelected(event_token token) const;
    event_token CastingDevicePickerDismissed(const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::IInspectable> & handler) const;
    using CastingDevicePickerDismissed_revoker = event_revoker<ICastingDevicePicker>;
    CastingDevicePickerDismissed_revoker CastingDevicePickerDismissed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Casting::CastingDevicePicker, Windows::IInspectable> & handler) const;
    void CastingDevicePickerDismissed(event_token token) const;
    void Show(const Windows::Foundation::Rect & selection) const;
    void Show(const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const;
    void Hide() const;
};

template <typename D>
struct WINRT_EBO impl_ICastingDevicePickerFilter
{
    bool SupportsAudio() const;
    void SupportsAudio(bool value) const;
    bool SupportsVideo() const;
    void SupportsVideo(bool value) const;
    bool SupportsPictures() const;
    void SupportsPictures(bool value) const;
    Windows::Foundation::Collections::IVector<Windows::Media::Casting::CastingSource> SupportedCastingSources() const;
};

template <typename D>
struct WINRT_EBO impl_ICastingDeviceSelectedEventArgs
{
    Windows::Media::Casting::CastingDevice SelectedCastingDevice() const;
};

template <typename D>
struct WINRT_EBO impl_ICastingDeviceStatics
{
    hstring GetDeviceSelector(Windows::Media::Casting::CastingPlaybackTypes type) const;
    Windows::Foundation::IAsyncOperation<hstring> GetDeviceSelectorFromCastingSourceAsync(const Windows::Media::Casting::CastingSource & castingSource) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Casting::CastingDevice> FromIdAsync(hstring_ref value) const;
    Windows::Foundation::IAsyncOperation<bool> DeviceInfoSupportsCastingAsync(const Windows::Devices::Enumeration::DeviceInformation & device) const;
};

template <typename D>
struct WINRT_EBO impl_ICastingSource
{
    Windows::Foundation::Uri PreferredSourceUri() const;
    void PreferredSourceUri(const Windows::Foundation::Uri & value) const;
};

struct ICastingConnection :
    Windows::IInspectable,
    impl::consume<ICastingConnection>,
    impl::require<ICastingConnection, Windows::Foundation::IClosable>
{
    ICastingConnection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICastingConnection>(m_ptr); }
};

struct ICastingConnectionErrorOccurredEventArgs :
    Windows::IInspectable,
    impl::consume<ICastingConnectionErrorOccurredEventArgs>
{
    ICastingConnectionErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICastingConnectionErrorOccurredEventArgs>(m_ptr); }
};

struct ICastingDevice :
    Windows::IInspectable,
    impl::consume<ICastingDevice>
{
    ICastingDevice(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICastingDevice>(m_ptr); }
};

struct ICastingDevicePicker :
    Windows::IInspectable,
    impl::consume<ICastingDevicePicker>
{
    ICastingDevicePicker(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICastingDevicePicker>(m_ptr); }
};

struct ICastingDevicePickerFilter :
    Windows::IInspectable,
    impl::consume<ICastingDevicePickerFilter>
{
    ICastingDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICastingDevicePickerFilter>(m_ptr); }
};

struct ICastingDeviceSelectedEventArgs :
    Windows::IInspectable,
    impl::consume<ICastingDeviceSelectedEventArgs>
{
    ICastingDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICastingDeviceSelectedEventArgs>(m_ptr); }
};

struct ICastingDeviceStatics :
    Windows::IInspectable,
    impl::consume<ICastingDeviceStatics>
{
    ICastingDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICastingDeviceStatics>(m_ptr); }
};

struct ICastingSource :
    Windows::IInspectable,
    impl::consume<ICastingSource>
{
    ICastingSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICastingSource>(m_ptr); }
};

}

}
