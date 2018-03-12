; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "candy"
#define MyAppVersion "candy1.5"
#define MyAppPublisher "ensi"
#define MyAppURL "http://www.example.com/"
#define MyAppExeName "MyProg.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{CB8E2E15-B272-4565-BA95-94C70D6EBA76}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DefaultGroupName={#MyAppName}
OutputBaseFilename=setup
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\Program Files (x86)\Inno Setup 5\Examples\MyProg.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\cambria.ttc"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\candy crush ensi.cbp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\candy crush ensi.depend"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\candy crush ensi.layout"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\candy crush.depend"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\candy crush.layout"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\candy.iss"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\candy.mp3"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\cc.iss"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\constant.h"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\constantes.h"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Croissant.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\croissant_raye.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Cupcake.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Cupcake_raye.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\cursor.png"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Danish.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Danish_raye.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\deplacer.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Donut.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Donut_raye.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Drip.wav"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\easy.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\easy.jpg"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\easy_red.jpg"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\function.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\function.h"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\game_over.jpg"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\grille_5X5.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\grille_hard.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\grille_med.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\hard.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\hard.jpg"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\hard_red.jpg"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\interface_acceuil.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\jpeg.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Ka-Ching.wav"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libfreetype-6.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libjpeg-9.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libogg-0.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libpng12-0.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libpng16-16.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libtiff-3.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libtiff-5.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libvorbis-0.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libvorbisfile-3.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\libwebp-4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\logo_ensi.jpg"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Macaroon.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Macaroon_raye.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\main.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\medium.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\medium.jpg"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\medium_red.jpg"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\menu.png"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\moves.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\musique.mp3"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\mute.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\mute_acc.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\mute_niv.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\niv_1.png"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\niv_2.jpg"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\niv_3.png"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\niveau.h"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\niveau_1.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\niveau_2.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\niveau_3.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\play.cpp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\play.h"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\play_button.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\play_button_red.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\points.wav"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\poligras.TTF"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\return_button _yel.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\return_button.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\score.png"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\Scrape.wav"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\SDL.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\SDL_image.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\SDL_mixer.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\SDL_ttf.lib"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\SDL2_image.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\SDL2_ttf.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\smpeg.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\son_niv.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\SugarCookie.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\SugarCookie_raye.bmp"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\oussami\Documents\oussamaa\zlib1.dll"; DestDir: "{app}"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

