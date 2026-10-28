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

// Function: sub_01C528F0
// Address: 0x1c528f0 - 0x1c529d8
void sub_01C528F0_0x1c528f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C528F0_0x1c528f0");
#endif

    switch (ctx->pc) {
        case 0x1c52910u: goto label_1c52910;
        case 0x1c52954u: goto label_1c52954;
        case 0x1c52960u: goto label_1c52960;
        case 0x1c52988u: goto label_1c52988;
        case 0x1c52994u: goto label_1c52994;
        default: break;
    }

    ctx->pc = 0x1c528f0u;

    // 0x1c528f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c528f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c528f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c528f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c528f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c528f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c528fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c528fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c52900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c52900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52904: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c52904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c52908: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52908u;
    SET_GPR_U32(ctx, 31, 0x1C52910u);
    ctx->pc = 0x1C5290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52908u;
    // 0x1c5290c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52908u, 0x1C52910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52910u;
label_1c52910:
    // 0x1c52910: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c52910u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c52914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c52914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52918: 0x25eff494  addiu       $t7, $t7, -0xB6C
    ctx->pc = 0x1c52918u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964372));
    // 0x1c5291c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5291cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52920: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c52920u;
    { uint32_t bits = FAST_READ32(0x1C5F494u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c52924: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c52924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52928: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c52928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5292c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c5292cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52930: 0x904f09b0  lbu         $t7, 0x9B0($v0)
    ctx->pc = 0x1c52930u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2480)));
    // 0x1c52934: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c52934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c52938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c52938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5293c: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5293Cu;
    {
        const bool branch_taken_0x1c5293c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5293Cu;
        // 0x1c52940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5293c) {
            ctx->pc = 0x1C5294Cu;
            goto label_1c5294c;
        }
    }
    ctx->pc = 0x1C52944u;
    // 0x1c52944: 0xa04009b0  sb          $zero, 0x9B0($v0)
    ctx->pc = 0x1c52944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c52948: 0xa040040d  sb          $zero, 0x40D($v0)
    ctx->pc = 0x1c52948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1037), (uint8_t)GPR_U32(ctx, 0));
label_1c5294c:
    // 0x1c5294c: 0xc714114  jal         func_1C50450
    ctx->pc = 0x1C5294Cu;
    SET_GPR_U32(ctx, 31, 0x1C52954u);
    ctx->pc = 0x1C50450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50450u, 0x1C5294Cu, 0x1C52954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52954u;
label_1c52954:
    // 0x1c52954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52958: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C52958u;
    SET_GPR_U32(ctx, 31, 0x1C52960u);
    ctx->pc = 0x1C5295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52958u;
    // 0x1c5295c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C52958u, 0x1C52960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52960u;
label_1c52960:
    // 0x1c52960: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c52960u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c52964: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c52964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c52968: 0x25eff498  addiu       $t7, $t7, -0xB68
    ctx->pc = 0x1c52968u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964376));
    // 0x1c5296c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5296cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c52970: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1c52970u;
    { uint32_t bits = FAST_READ32(0x1C5F498u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c52974: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c52974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52978: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c52978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c5297c: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c5297cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c52980: 0xc714116  jal         func_1C50458
    ctx->pc = 0x1C52980u;
    SET_GPR_U32(ctx, 31, 0x1C52988u);
    ctx->pc = 0x1C52984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52980u;
    // 0x1c52984: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50458u, 0x1C52980u, 0x1C52988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52988u;
label_1c52988:
    // 0x1c52988: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c52988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c5298c: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C5298Cu;
    SET_GPR_U32(ctx, 31, 0x1C52994u);
    ctx->pc = 0x1C52990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5298Cu;
    // 0x1c52990: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C5298Cu, 0x1C52994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52994u;
label_1c52994:
    // 0x1c52994: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x1c52994u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c52998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c52998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5299c: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5299Cu;
    {
        const bool branch_taken_0x1c5299c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C529A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5299Cu;
        // 0x1c529a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5299c) {
            ctx->pc = 0x1C529C4u;
            goto label_1c529c4;
        }
    }
    ctx->pc = 0x1C529A4u;
    // 0x1c529a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c529a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c529a8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1c529a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c529ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c529acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c529b0: 0x24840500  addiu       $a0, $a0, 0x500
    ctx->pc = 0x1c529b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    // 0x1c529b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c529b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c529b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c529b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c529bc: 0x871411a  j           func_1C50468
    ctx->pc = 0x1C529BCu;
    ctx->pc = 0x1C529C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C529BCu;
    // 0x1c529c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50468u;
    sub_01C50468_0x1c50468(rdram, ctx, runtime); return;
    ctx->pc = 0x1C529C4u;
label_1c529c4:
    // 0x1c529c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c529c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c529c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c529c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c529cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c529ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c529d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C529D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C529D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C529D0u;
        // 0x1c529d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C529D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C529D8u;
}
