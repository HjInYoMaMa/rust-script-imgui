void rust_imgui()
{
ImGui::SetNextWindowSize({378.f,154.f});

ImGui::Begin( "Rust Script - imgui by hj.#4337");
ImGui::SetCursorPos({14.f,29.f});
ImGui::Checkbox("Enable", &the_bool);
ImGui::SetCursorPos({14.f,53.f});
ImGui::Checkbox("Autodetection", &the_bool);
ImGui::SetCursorPos({14.f,76.f});
ImGui::Checkbox("Hipfire", &the_bool);
ImGui::SetCursorPos({14.f,98.f});
ImGui::Checkbox("Legit mode", &the_bool);
ImGui::SetCursorPos({14.f,120.f});
ImGui::Checkbox("Instant Eoka", &the_bool);
ImGui::SetCursorPos({134.f,27.f});
ImGui::PushItemWidth(234.000000);
ImGui::SliderInt("", &valueI,0,100);
ImGui::PopItemWidth( );
ImGui::SetCursorPos({207.f,53.f});
ImGui::PushItemWidth(84.000000);
ImGui::Text("Humanization");
ImGui::PopItemWidth( );
ImGui::SetCursorPos({176.f,110.f});
ImGui::PushItemWidth(305.000000);
ImGui::SliderInt("sliderI8", &valueI,0,100);
ImGui::PopItemWidth( );


ImGui::End();
}