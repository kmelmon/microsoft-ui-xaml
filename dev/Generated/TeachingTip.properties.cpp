// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TeachingTip.h"

CppWinRTActivatableClassWithDPFactory(TeachingTip)

GlobalDependencyProperty TeachingTipProperties::s_ActionButtonCommandProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_ActionButtonCommandParameterProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_ActionButtonStyleProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_ActionButtonTextProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_AttachProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_BleedingImageContentProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_BleedingImagePlacementProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_CloseButtonCommandProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_CloseButtonCommandParameterProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_CloseButtonKindProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_CloseButtonStyleProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_CloseButtonTextProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_IconSourceProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_IsLightDismissEnabledProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_IsOpenProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_PlacementProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_SubtextProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_TargetOffsetProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_TemplateSettingsProperty{ nullptr };
GlobalDependencyProperty TeachingTipProperties::s_TitleProperty{ nullptr };

TeachingTipProperties::TeachingTipProperties()
    : m_actionButtonClickEventSource{static_cast<TeachingTip*>(this)}
    , m_closeButtonClickEventSource{static_cast<TeachingTip*>(this)}
    , m_closedEventSource{static_cast<TeachingTip*>(this)}
    , m_closingEventSource{static_cast<TeachingTip*>(this)}
{
    EnsureProperties();
}

void TeachingTipProperties::EnsureProperties()
{
    if (!s_ActionButtonCommandProperty)
    {
        s_ActionButtonCommandProperty =
            InitializeDependencyProperty(
                L"ActionButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ActionButtonCommandParameterProperty)
    {
        s_ActionButtonCommandParameterProperty =
            InitializeDependencyProperty(
                L"ActionButtonCommandParameter",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ActionButtonStyleProperty)
    {
        s_ActionButtonStyleProperty =
            InitializeDependencyProperty(
                L"ActionButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ActionButtonTextProperty)
    {
        s_ActionButtonTextProperty =
            InitializeDependencyProperty(
                L"ActionButtonText",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_AttachProperty)
    {
        s_AttachProperty =
            InitializeDependencyProperty(
                L"Attach",
                winrt::name_of<winrt::TeachingTip>(),
                winrt::name_of<winrt::TeachingTip>(),
                true /* isAttached */,
                ValueHelper<winrt::TeachingTip>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_BleedingImageContentProperty)
    {
        s_BleedingImageContentProperty =
            InitializeDependencyProperty(
                L"BleedingImageContent",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_BleedingImagePlacementProperty)
    {
        s_BleedingImagePlacementProperty =
            InitializeDependencyProperty(
                L"BleedingImagePlacement",
                winrt::name_of<winrt::TeachingTipBleedingImagePlacementMode>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::TeachingTipBleedingImagePlacementMode>::BoxValueIfNecessary(winrt::TeachingTipBleedingImagePlacementMode::Auto),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_CloseButtonCommandProperty)
    {
        s_CloseButtonCommandProperty =
            InitializeDependencyProperty(
                L"CloseButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_CloseButtonCommandParameterProperty)
    {
        s_CloseButtonCommandParameterProperty =
            InitializeDependencyProperty(
                L"CloseButtonCommandParameter",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_CloseButtonKindProperty)
    {
        s_CloseButtonKindProperty =
            InitializeDependencyProperty(
                L"CloseButtonKind",
                winrt::name_of<winrt::TeachingTipCloseButtonKind>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::TeachingTipCloseButtonKind>::BoxValueIfNecessary(winrt::TeachingTipCloseButtonKind::Auto),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_CloseButtonStyleProperty)
    {
        s_CloseButtonStyleProperty =
            InitializeDependencyProperty(
                L"CloseButtonStyle",
                winrt::name_of<winrt::Style>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::Style>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_CloseButtonTextProperty)
    {
        s_CloseButtonTextProperty =
            InitializeDependencyProperty(
                L"CloseButtonText",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_IconSourceProperty)
    {
        s_IconSourceProperty =
            InitializeDependencyProperty(
                L"IconSource",
                winrt::name_of<winrt::IconSource>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::IconSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_IsLightDismissEnabledProperty)
    {
        s_IsLightDismissEnabledProperty =
            InitializeDependencyProperty(
                L"IsLightDismissEnabled",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_IsOpenProperty)
    {
        s_IsOpenProperty =
            InitializeDependencyProperty(
                L"IsOpen",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_PlacementProperty)
    {
        s_PlacementProperty =
            InitializeDependencyProperty(
                L"Placement",
                winrt::name_of<winrt::TeachingTipPlacementMode>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::TeachingTipPlacementMode>::BoxValueIfNecessary(winrt::TeachingTipPlacementMode::Auto),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_SubtextProperty)
    {
        s_SubtextProperty =
            InitializeDependencyProperty(
                L"Subtext",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_TargetOffsetProperty)
    {
        s_TargetOffsetProperty =
            InitializeDependencyProperty(
                L"TargetOffset",
                winrt::name_of<winrt::Thickness>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::Thickness>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_TemplateSettingsProperty)
    {
        s_TemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TemplateSettings",
                winrt::name_of<winrt::TeachingTipTemplateSettings>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::TeachingTipTemplateSettings>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_TitleProperty)
    {
        s_TitleProperty =
            InitializeDependencyProperty(
                L"Title",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TeachingTip>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
}

void TeachingTipProperties::ClearProperties()
{
    s_ActionButtonCommandProperty = nullptr;
    s_ActionButtonCommandParameterProperty = nullptr;
    s_ActionButtonStyleProperty = nullptr;
    s_ActionButtonTextProperty = nullptr;
    s_AttachProperty = nullptr;
    s_BleedingImageContentProperty = nullptr;
    s_BleedingImagePlacementProperty = nullptr;
    s_CloseButtonCommandProperty = nullptr;
    s_CloseButtonCommandParameterProperty = nullptr;
    s_CloseButtonKindProperty = nullptr;
    s_CloseButtonStyleProperty = nullptr;
    s_CloseButtonTextProperty = nullptr;
    s_IconSourceProperty = nullptr;
    s_IsLightDismissEnabledProperty = nullptr;
    s_IsOpenProperty = nullptr;
    s_PlacementProperty = nullptr;
    s_SubtextProperty = nullptr;
    s_TargetOffsetProperty = nullptr;
    s_TemplateSettingsProperty = nullptr;
    s_TitleProperty = nullptr;
}

void TeachingTipProperties::OnPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TeachingTip>();
    winrt::get_self<TeachingTip>(owner)->OnPropertyChanged(args);
}

void TeachingTipProperties::ActionButtonCommand(winrt::ICommand const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_ActionButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
}

winrt::ICommand TeachingTipProperties::ActionButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_ActionButtonCommandProperty));
}

void TeachingTipProperties::ActionButtonCommandParameter(winrt::IInspectable const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_ActionButtonCommandParameterProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TeachingTipProperties::ActionButtonCommandParameter()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_ActionButtonCommandParameterProperty));
}

void TeachingTipProperties::ActionButtonStyle(winrt::Style const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_ActionButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
}

winrt::Style TeachingTipProperties::ActionButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_ActionButtonStyleProperty));
}

void TeachingTipProperties::ActionButtonText(winrt::hstring const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_ActionButtonTextProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring TeachingTipProperties::ActionButtonText()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_ActionButtonTextProperty));
}

void TeachingTipProperties::SetAttach(winrt::UIElement const& target, winrt::TeachingTip const& value)
{
    target.SetValue(s_AttachProperty, ValueHelper<winrt::TeachingTip>::BoxValueIfNecessary(value));
}

winrt::TeachingTip TeachingTipProperties::GetAttach(winrt::UIElement const& target)
{
    return ValueHelper<winrt::TeachingTip>::CastOrUnbox(target.GetValue(s_AttachProperty));
}

void TeachingTipProperties::BleedingImageContent(winrt::UIElement const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_BleedingImageContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement TeachingTipProperties::BleedingImageContent()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_BleedingImageContentProperty));
}

void TeachingTipProperties::BleedingImagePlacement(winrt::TeachingTipBleedingImagePlacementMode const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_BleedingImagePlacementProperty, ValueHelper<winrt::TeachingTipBleedingImagePlacementMode>::BoxValueIfNecessary(value));
}

winrt::TeachingTipBleedingImagePlacementMode TeachingTipProperties::BleedingImagePlacement()
{
    return ValueHelper<winrt::TeachingTipBleedingImagePlacementMode>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_BleedingImagePlacementProperty));
}

void TeachingTipProperties::CloseButtonCommand(winrt::ICommand const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_CloseButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
}

winrt::ICommand TeachingTipProperties::CloseButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_CloseButtonCommandProperty));
}

void TeachingTipProperties::CloseButtonCommandParameter(winrt::IInspectable const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_CloseButtonCommandParameterProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TeachingTipProperties::CloseButtonCommandParameter()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_CloseButtonCommandParameterProperty));
}

void TeachingTipProperties::CloseButtonKind(winrt::TeachingTipCloseButtonKind const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_CloseButtonKindProperty, ValueHelper<winrt::TeachingTipCloseButtonKind>::BoxValueIfNecessary(value));
}

winrt::TeachingTipCloseButtonKind TeachingTipProperties::CloseButtonKind()
{
    return ValueHelper<winrt::TeachingTipCloseButtonKind>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_CloseButtonKindProperty));
}

void TeachingTipProperties::CloseButtonStyle(winrt::Style const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_CloseButtonStyleProperty, ValueHelper<winrt::Style>::BoxValueIfNecessary(value));
}

winrt::Style TeachingTipProperties::CloseButtonStyle()
{
    return ValueHelper<winrt::Style>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_CloseButtonStyleProperty));
}

void TeachingTipProperties::CloseButtonText(winrt::hstring const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_CloseButtonTextProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring TeachingTipProperties::CloseButtonText()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_CloseButtonTextProperty));
}

void TeachingTipProperties::IconSource(winrt::IconSource const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_IconSourceProperty, ValueHelper<winrt::IconSource>::BoxValueIfNecessary(value));
}

winrt::IconSource TeachingTipProperties::IconSource()
{
    return ValueHelper<winrt::IconSource>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_IconSourceProperty));
}

void TeachingTipProperties::IsLightDismissEnabled(bool value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_IsLightDismissEnabledProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TeachingTipProperties::IsLightDismissEnabled()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_IsLightDismissEnabledProperty));
}

void TeachingTipProperties::IsOpen(bool value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_IsOpenProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TeachingTipProperties::IsOpen()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_IsOpenProperty));
}

void TeachingTipProperties::Placement(winrt::TeachingTipPlacementMode const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_PlacementProperty, ValueHelper<winrt::TeachingTipPlacementMode>::BoxValueIfNecessary(value));
}

winrt::TeachingTipPlacementMode TeachingTipProperties::Placement()
{
    return ValueHelper<winrt::TeachingTipPlacementMode>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_PlacementProperty));
}

void TeachingTipProperties::Subtext(winrt::hstring const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_SubtextProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring TeachingTipProperties::Subtext()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_SubtextProperty));
}

void TeachingTipProperties::TargetOffset(winrt::Thickness const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_TargetOffsetProperty, ValueHelper<winrt::Thickness>::BoxValueIfNecessary(value));
}

winrt::Thickness TeachingTipProperties::TargetOffset()
{
    return ValueHelper<winrt::Thickness>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_TargetOffsetProperty));
}

void TeachingTipProperties::TemplateSettings(winrt::TeachingTipTemplateSettings const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_TemplateSettingsProperty, ValueHelper<winrt::TeachingTipTemplateSettings>::BoxValueIfNecessary(value));
}

winrt::TeachingTipTemplateSettings TeachingTipProperties::TemplateSettings()
{
    return ValueHelper<winrt::TeachingTipTemplateSettings>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_TemplateSettingsProperty));
}

void TeachingTipProperties::Title(winrt::hstring const& value)
{
    static_cast<TeachingTip*>(this)->SetValue(s_TitleProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring TeachingTipProperties::Title()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TeachingTip*>(this)->GetValue(s_TitleProperty));
}

winrt::event_token TeachingTipProperties::ActionButtonClick(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_actionButtonClickEventSource.add(value);
}

void TeachingTipProperties::ActionButtonClick(winrt::event_token const& token)
{
    m_actionButtonClickEventSource.remove(token);
}

winrt::event_token TeachingTipProperties::CloseButtonClick(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_closeButtonClickEventSource.add(value);
}

void TeachingTipProperties::CloseButtonClick(winrt::event_token const& token)
{
    m_closeButtonClickEventSource.remove(token);
}

winrt::event_token TeachingTipProperties::Closed(winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosedEventArgs> const& value)
{
    return m_closedEventSource.add(value);
}

void TeachingTipProperties::Closed(winrt::event_token const& token)
{
    m_closedEventSource.remove(token);
}

winrt::event_token TeachingTipProperties::Closing(winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosingEventArgs> const& value)
{
    return m_closingEventSource.add(value);
}

void TeachingTipProperties::Closing(winrt::event_token const& token)
{
    m_closingEventSource.remove(token);
}
