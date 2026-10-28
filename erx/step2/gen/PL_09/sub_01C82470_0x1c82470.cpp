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

// Function: sub_01C82470
// Address: 0x1c82470 - 0x1c82570
void sub_01C82470_0x1c82470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C82470_0x1c82470");
#endif

    switch (ctx->pc) {
        case 0x1c82494u: goto label_1c82494;
        case 0x1c82524u: goto label_1c82524;
        default: break;
    }

    ctx->pc = 0x1c82470u;

    // 0x1c82470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c82470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c82474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c82474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c82478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c82478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8247c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8247cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c82480: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c82480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82484: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c82484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82488: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c82488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8248c: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C8248Cu;
    SET_GPR_U32(ctx, 31, 0x1C82494u);
    ctx->pc = 0x1C82490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8248Cu;
    // 0x1c82490: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C8248Cu, 0x1C82494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82494u;
label_1c82494:
    // 0x1c82494: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c82494u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c82498: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1c82498u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c8249c: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1c8249cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c824a0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c824a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c824a4: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c824a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c824a8: 0x860e000e  lh          $t6, 0xE($s0)
    ctx->pc = 0x1c824a8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1c824ac: 0x8609000c  lh          $t1, 0xC($s0)
    ctx->pc = 0x1c824acu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c824b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c824b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c824b4: 0xae2e0434  sw          $t6, 0x434($s1)
    ctx->pc = 0x1c824b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1076), GPR_U32(ctx, 14));
    // 0x1c824b8: 0xae290430  sw          $t1, 0x430($s1)
    ctx->pc = 0x1c824b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 9));
    // 0x1c824bc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c824bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c824c0: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1c824c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c824c4: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1c824c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1c824c8: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1c824c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c824cc: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1c824ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1c824d0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c824d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c824d4: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1c824d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1c824d8: 0x25ce4610  addiu       $t6, $t6, 0x4610
    ctx->pc = 0x1c824d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17936));
    // 0x1c824dc: 0xae2e0420  sw          $t6, 0x420($s1)
    ctx->pc = 0x1c824dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 14));
    // 0x1c824e0: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1c824e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c824e4: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1c824e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1c824e8: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x1c824e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c824ec: 0xae2f0444  sw          $t7, 0x444($s1)
    ctx->pc = 0x1c824ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1092), GPR_U32(ctx, 15));
    // 0x1c824f0: 0xae2d0428  sw          $t5, 0x428($s1)
    ctx->pc = 0x1c824f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 13));
    // 0x1c824f4: 0x8e0f0020  lw          $t7, 0x20($s0)
    ctx->pc = 0x1c824f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c824f8: 0xe620042c  swc1        $f0, 0x42C($s1)
    ctx->pc = 0x1c824f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1068), bits); }
    // 0x1c824fc: 0xae2f0450  sw          $t7, 0x450($s1)
    ctx->pc = 0x1c824fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 15));
    // 0x1c82500: 0xae2b0440  sw          $t3, 0x440($s1)
    ctx->pc = 0x1c82500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1088), GPR_U32(ctx, 11));
    // 0x1c82504: 0x8e0f0024  lw          $t7, 0x24($s0)
    ctx->pc = 0x1c82504u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c82508: 0xae2c0424  sw          $t4, 0x424($s1)
    ctx->pc = 0x1c82508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1060), GPR_U32(ctx, 12));
    // 0x1c8250c: 0xae2f0454  sw          $t7, 0x454($s1)
    ctx->pc = 0x1c8250cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 15));
    // 0x1c82510: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1c82510u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c82514: 0xae2f0458  sw          $t7, 0x458($s1)
    ctx->pc = 0x1c82514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1112), GPR_U32(ctx, 15));
    // 0x1c82518: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1c82518u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c8251c: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8251Cu;
    {
        const bool branch_taken_0x1c8251c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1C82520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8251Cu;
        // 0x1c82520: 0xae2f045c  sw          $t7, 0x45C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8251c) {
            ctx->pc = 0x1C8255Cu;
            goto label_1c8255c;
        }
    }
    ctx->pc = 0x1C82524u;
label_1c82524:
    // 0x1c82524: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c82524u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c82528: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1c82528u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1c8252c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c8252cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c82530: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1c82530u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1c82534: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c82534u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c82538: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1c82538u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1c8253c: 0xaded0460  sw          $t5, 0x460($t7)
    ctx->pc = 0x1c8253cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1120), GPR_U32(ctx, 13));
    // 0x1c82540: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1c82540u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1c82544: 0xadee0464  sw          $t6, 0x464($t7)
    ctx->pc = 0x1c82544u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1124), GPR_U32(ctx, 14));
    // 0x1c82548: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1c82548u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1c8254c: 0xaded0468  sw          $t5, 0x468($t7)
    ctx->pc = 0x1c8254cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1128), GPR_U32(ctx, 13));
    // 0x1c82550: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1c82550u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1c82554: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C82554u;
    {
        const bool branch_taken_0x1c82554 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C82558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82554u;
        // 0x1c82558: 0xadee046c  sw          $t6, 0x46C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 1132), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82554) {
            ctx->pc = 0x1C82524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82524;
        }
    }
    ctx->pc = 0x1C8255Cu;
label_1c8255c:
    // 0x1c8255c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8255cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c82560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c82564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c82568: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82568u;
        // 0x1c8256c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82570u;
}
