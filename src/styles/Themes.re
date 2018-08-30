module type ThemeType = {
  let sidebarWidth: [ Css.length | `auto];
  let sidebarBgColor: Css.color;
};

module DefaultTheme: ThemeType = {
  let sidebarWidth = Css.px(320);
  let sidebarBgColor = Css.rgb(0, 0, 0);
};
