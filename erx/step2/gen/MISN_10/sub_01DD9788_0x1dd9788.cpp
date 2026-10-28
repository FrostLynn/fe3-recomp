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

// Function: sub_01DD9788
// Address: 0x1dd9788 - 0x1dd97f8
void sub_01DD9788_0x1dd9788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9788_0x1dd9788");
#endif

    switch (ctx->pc) {
        case 0x1dd97bcu: goto label_1dd97bc;
        case 0x1dd97e0u: goto label_1dd97e0;
        default: break;
    }

    ctx->pc = 0x1dd9788u;

    // 0x1dd9788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd9788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd978c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd978cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd9790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd9794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd9794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd9798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dd979c: 0x91ee0110  lbu         $t6, 0x110($t7)
    ctx->pc = 0x1dd979cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 272)));
    // 0x1dd97a0: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD97A0u;
    {
        const bool branch_taken_0x1dd97a0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD97A0u;
        // 0x1dd97a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd97a0) {
            ctx->pc = 0x1DD97B0u;
            goto label_1dd97b0;
        }
    }
    ctx->pc = 0x1DD97A8u;
    // 0x1dd97a8: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd97a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dd97ac: 0x2df10001  sltiu       $s1, $t7, 0x1
    ctx->pc = 0x1dd97acu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dd97b0:
    // 0x1dd97b0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1dd97b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1dd97b4: 0xc7765a4  jal         func_1DD9690
    ctx->pc = 0x1DD97B4u;
    SET_GPR_U32(ctx, 31, 0x1DD97BCu);
    ctx->pc = 0x1DD97B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD97B4u;
    // 0x1dd97b8: 0x2484a198  addiu       $a0, $a0, -0x5E68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9690u, 0x1DD97B4u, 0x1DD97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD97BCu;
label_1dd97bc:
    // 0x1dd97bc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD97BCu;
    {
        const bool branch_taken_0x1dd97bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD97BCu;
        // 0x1dd97c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd97bc) {
            ctx->pc = 0x1DD97E0u;
            goto label_1dd97e0;
        }
    }
    ctx->pc = 0x1DD97C4u;
    // 0x1dd97c4: 0x3c0f01de  lui         $t7, 0x1DE
    ctx->pc = 0x1dd97c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)478 << 16));
    // 0x1dd97c8: 0x25efee58  addiu       $t7, $t7, -0x11A8
    ctx->pc = 0x1dd97c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962776));
    // 0x1dd97cc: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dd97ccu;
    { uint32_t bits = FAST_READ32(0x1DDEE58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd97d0: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd97d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd97d4: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd97d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd97d8: 0xc77659c  jal         func_1DD9670
    ctx->pc = 0x1DD97D8u;
    SET_GPR_U32(ctx, 31, 0x1DD97E0u);
    ctx->pc = 0x1DD97DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD97D8u;
    // 0x1dd97dc: 0x24840160  addiu       $a0, $a0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9670u, 0x1DD97D8u, 0x1DD97E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD97E0u;
label_1dd97e0:
    // 0x1dd97e0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1dd97e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1dd97e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd97e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd97e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd97e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd97ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd97ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd97f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD97F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD97F0u;
        // 0x1dd97f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD97F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD97F8u;
}
