#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C77018
// Address: 0x1c77018 - 0x1c77118
void sub_01C77018_0x1c77018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77018_0x1c77018");
#endif

    switch (ctx->pc) {
        case 0x1c7703cu: goto label_1c7703c;
        case 0x1c770ccu: goto label_1c770cc;
        default: break;
    }

    ctx->pc = 0x1c77018u;

    // 0x1c77018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7701c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c77020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c77024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c77028: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c77028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7702c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c7702cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77030: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c77030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c77034: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77034u;
    SET_GPR_U32(ctx, 31, 0x1C7703Cu);
    ctx->pc = 0x1C77038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77034u;
    // 0x1c77038: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77034u, 0x1C7703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7703Cu;
label_1c7703c:
    // 0x1c7703c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1c7703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77040: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c77040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c77044: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c77044u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c77048: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c77048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7704c: 0xe62001f0  swc1        $f0, 0x1F0($s1)
    ctx->pc = 0x1c7704cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
    // 0x1c77050: 0xae2f01ec  sw          $t7, 0x1EC($s1)
    ctx->pc = 0x1c77050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 15));
    // 0x1c77054: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1c77054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77058: 0x8e0d0008  lw          $t5, 0x8($s0)
    ctx->pc = 0x1c77058u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c7705c: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c7705cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c77060: 0xe62001fc  swc1        $f0, 0x1FC($s1)
    ctx->pc = 0x1c77060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
    // 0x1c77064: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c77064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c77068: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1c77068u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7706c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1c7706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77070: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1c77070u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c77074: 0xe62001f8  swc1        $f0, 0x1F8($s1)
    ctx->pc = 0x1c77074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 504), bits); }
    // 0x1c77078: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c77078u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c7707c: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1c7707cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c77080: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c77080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77084: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c77084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c77088: 0xae2b01e8  sw          $t3, 0x1E8($s1)
    ctx->pc = 0x1c77088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 11));
    // 0x1c7708c: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x1c7708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x1c77090: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c77090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77094: 0x8dcf0084  lw          $t7, 0x84($t6)
    ctx->pc = 0x1c77094u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c77098: 0xe6200204  swc1        $f0, 0x204($s1)
    ctx->pc = 0x1c77098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x1c7709c: 0x8c4e00b4  lw          $t6, 0xB4($v0)
    ctx->pc = 0x1c7709cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c770a0: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1c770a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1c770a4: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1c770a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c770a8: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1c770a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1c770ac: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1c770acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c770b0: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1c770b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1c770b4: 0xae2f01e0  sw          $t7, 0x1E0($s1)
    ctx->pc = 0x1c770b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 15));
    // 0x1c770b8: 0xae2e01e4  sw          $t6, 0x1E4($s1)
    ctx->pc = 0x1c770b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 14));
    // 0x1c770bc: 0xae2d01f4  sw          $t5, 0x1F4($s1)
    ctx->pc = 0x1c770bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 13));
    // 0x1c770c0: 0x19600010  blez        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C770C0u;
    {
        const bool branch_taken_0x1c770c0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x1C770C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C770C0u;
        // 0x1c770c4: 0xe6200208  swc1        $f0, 0x208($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c770c0) {
            ctx->pc = 0x1C77104u;
            goto label_1c77104;
        }
    }
    ctx->pc = 0x1C770C8u;
    // 0x1c770c8: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1c770c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1c770cc:
    // 0x1c770cc: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c770ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c770d0: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1c770d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1c770d4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c770d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c770d8: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1c770d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1c770dc: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c770dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c770e0: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1c770e0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1c770e4: 0xaded0210  sw          $t5, 0x210($t7)
    ctx->pc = 0x1c770e4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 528), GPR_U32(ctx, 13));
    // 0x1c770e8: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1c770e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1c770ec: 0xadee0214  sw          $t6, 0x214($t7)
    ctx->pc = 0x1c770ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 532), GPR_U32(ctx, 14));
    // 0x1c770f0: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1c770f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1c770f4: 0xaded0218  sw          $t5, 0x218($t7)
    ctx->pc = 0x1c770f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 536), GPR_U32(ctx, 13));
    // 0x1c770f8: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1c770f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1c770fc: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C770FCu;
    {
        const bool branch_taken_0x1c770fc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C77100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C770FCu;
        // 0x1c77100: 0xadee021c  sw          $t6, 0x21C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 540), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c770fc) {
            ctx->pc = 0x1C770CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c770cc;
        }
    }
    ctx->pc = 0x1C77104u;
label_1c77104:
    // 0x1c77104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c77108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7710c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7710cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77110: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77110u;
        // 0x1c77114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77118u;
}
