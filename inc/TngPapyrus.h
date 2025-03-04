#pragma once
class TngPapyrus : public Singleton<TngPapyrus> {
  private:
    static void UpdateSize(RE::StaticFunctionTag*, int aIdx);
    static void UpdateRace(RE::StaticFunctionTag*, int aRaceIdx, int aGenOption, float aGenMult);
    static void SetAutoRevealing(RE::StaticFunctionTag*, bool aFemaleArmor, bool aMaleArmor);
    static int CanModifyActor(RE::StaticFunctionTag*, RE::Actor* aActor);
    static bool SetActorShape(RE::StaticFunctionTag*, RE::Actor* aActor, int aGenOption);
    static void SetActorSize(RE::StaticFunctionTag*, RE::Actor* aActor, int aGenSize);
    static void UpdateMessage(RE::StaticFunctionTag*, bool aIsFemale);
    static void ResetMessage(RE::StaticFunctionTag*, bool aIsFemale);
    static bool GetFAutoReveal(RE::StaticFunctionTag*);
    static bool GetMAutoReveal(RE::StaticFunctionTag*);
    static int GetGenType(RE::StaticFunctionTag*, int aRaceIdx);
    static float GetGenSize(RE::StaticFunctionTag*, int aRaceIdx);
    static bool MakeRevealing(RE::StaticFunctionTag*, RE::TESObjectARMO* aArmor);
    static void SaveGlobals(RE::StaticFunctionTag*);

  public:
    static bool BindPapyrus(RE::BSScript::IVirtualMachine* aVM) noexcept;
};