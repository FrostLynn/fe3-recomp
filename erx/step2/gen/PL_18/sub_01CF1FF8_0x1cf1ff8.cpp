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

// Function: sub_01CF1FF8
// Address: 0x1cf1ff8 - 0x1cf2098
void sub_01CF1FF8_0x1cf1ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1FF8_0x1cf1ff8");
#endif

    switch (ctx->pc) {
        case 0x1cf2038u: goto label_1cf2038;
        case 0x1cf2054u: goto label_1cf2054;
        case 0x1cf2078u: goto label_1cf2078;
        case 0x1cf208cu: goto label_1cf208c;
        default: break;
    }

    ctx->pc = 0x1cf1ff8u;

    // 0x1cf1ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1ffc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1cf1ffcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf2000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf2004: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1cf2004u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2008: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf2008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf200c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1cf200cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2010: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cf2010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2014: 0x240f010e  addiu       $t7, $zero, 0x10E
    ctx->pc = 0x1cf2014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x1cf2018: 0x11cf0019  beq         $t6, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CF2018u;
    {
        const bool branch_taken_0x1cf2018 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CF201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2018u;
        // 0x1cf201c: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2018) {
            ctx->pc = 0x1CF2080u;
            goto label_1cf2080;
        }
    }
    ctx->pc = 0x1CF2020u;
    // 0x1cf2020: 0x240f010f  addiu       $t7, $zero, 0x10F
    ctx->pc = 0x1cf2020u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x1cf2024: 0x55cf000f  bnel        $t6, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x1CF2024u;
    {
        const bool branch_taken_0x1cf2024 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cf2024) {
            ctx->pc = 0x1CF2028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF2024u;
            // 0x1cf2028: 0x3c0401cf  lui         $a0, 0x1CF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)463 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF2064u;
            goto label_1cf2064;
        }
    }
    ctx->pc = 0x1CF202Cu;
    // 0x1cf202c: 0x3c0601d0  lui         $a2, 0x1D0
    ctx->pc = 0x1cf202cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)464 << 16));
    // 0x1cf2030: 0xc73c16e  jal         func_1CF05B8
    ctx->pc = 0x1CF2030u;
    SET_GPR_U32(ctx, 31, 0x1CF2038u);
    ctx->pc = 0x1CF2034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2030u;
    // 0x1cf2034: 0x24c68b30  addiu       $a2, $a2, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF05B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF05B8u, 0x1CF2030u, 0x1CF2038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2038u;
label_1cf2038:
    // 0x1cf2038: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf2038u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf203c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1cf203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf2040: 0x25efd114  addiu       $t7, $t7, -0x2EEC
    ctx->pc = 0x1cf2040u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955284));
    // 0x1cf2044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf2044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf2048: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1cf2048u;
    { uint32_t bits = FAST_READ32(0x1CFD114u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf204c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cf204cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cf2050: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1cf2050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1cf2054:
    // 0x1cf2054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf2054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf2058: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf2058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf205c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF205Cu;
        // 0x1cf2060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF205Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF2064u;
label_1cf2064:
    // 0x1cf2064: 0x3c0501cf  lui         $a1, 0x1CF
    ctx->pc = 0x1cf2064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)463 << 16));
    // 0x1cf2068: 0x2484f5d0  addiu       $a0, $a0, -0xA30
    ctx->pc = 0x1cf2068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964688));
    // 0x1cf206c: 0x24a53040  addiu       $a1, $a1, 0x3040
    ctx->pc = 0x1cf206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12352));
    // 0x1cf2070: 0xc73bd76  jal         func_1CEF5D8
    ctx->pc = 0x1CF2070u;
    SET_GPR_U32(ctx, 31, 0x1CF2078u);
    ctx->pc = 0x1CF2074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2070u;
    // 0x1cf2074: 0x2406030e  addiu       $a2, $zero, 0x30E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 782));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF5D8u, 0x1CF2070u, 0x1CF2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2078u;
label_1cf2078:
    // 0x1cf2078: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1CF2078u;
    {
        const bool branch_taken_0x1cf2078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2078u;
        // 0x1cf207c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2078) {
            ctx->pc = 0x1CF2054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf2054;
        }
    }
    ctx->pc = 0x1CF2080u;
label_1cf2080:
    // 0x1cf2080: 0x3c0601d0  lui         $a2, 0x1D0
    ctx->pc = 0x1cf2080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)464 << 16));
    // 0x1cf2084: 0xc73c276  jal         func_1CF09D8
    ctx->pc = 0x1CF2084u;
    SET_GPR_U32(ctx, 31, 0x1CF208Cu);
    ctx->pc = 0x1CF2088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2084u;
    // 0x1cf2088: 0x24c68b60  addiu       $a2, $a2, -0x74A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF09D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF09D8u, 0x1CF2084u, 0x1CF208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF208Cu;
label_1cf208c:
    // 0x1cf208c: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1CF208Cu;
    {
        const bool branch_taken_0x1cf208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF208Cu;
        // 0x1cf2090: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf208c) {
            ctx->pc = 0x1CF2054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf2054;
        }
    }
    ctx->pc = 0x1CF2094u;
    // 0x1cf2094: 0x0  nop
    ctx->pc = 0x1cf2094u;
    // NOP
    ctx->pc = 0x1cf2098u;
}
