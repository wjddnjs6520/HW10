using UnrealBuildTool;

public class Test : ModuleRules
{
    public Test(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        // 🟢 Public 헤더 경로 추가
        PublicIncludePaths.AddRange(new string[] {  });
    }
}
